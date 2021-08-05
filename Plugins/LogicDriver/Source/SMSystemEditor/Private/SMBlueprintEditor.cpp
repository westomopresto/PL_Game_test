// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#include "SMBlueprintEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "SKismetInspector.h"
#include "Configuration/SMEditorModes.h"
#include "SBlueprintEditorToolbar.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/DebuggerCommands.h"
#include "ContentBrowserModule.h"
#include "ContentBrowser/Private/SAssetDialog.h"
#include "ScopedTransaction.h"
#include "ISMSystemEditorModule.h"
#include "Commands/SMEditorCommands.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "Graph/SMGraphK2.h"
#include "Graph/Schema/SMGraphSchema.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineParentNode.h"
#include "Graph/SMPropertyGraph.h"
#include "Utilities/SMVersionUtils.h"


#define LOCTEXT_NAMESPACE "SMEditor"


FSMBlueprintEditor::FOnCreateGraphEditorCommands FSMBlueprintEditor::OnCreateGraphEditorCommandsEvent;

FSMBlueprintEditor::FSMBlueprintEditor(): SelectedPropertyNode(nullptr)
{
}

FSMBlueprintEditor::~FSMBlueprintEditor()
{
	if (LoadedBlueprint.IsValid() && OnDebugObjectSetHandle.IsValid())
	{
		LoadedBlueprint->OnSetObjectBeingDebugged().Remove(OnDebugObjectSetHandle);
	}
}

void FSMBlueprintEditor::InitSMBlueprintEditor(const EToolkitMode::Type Mode, const TSharedPtr< IToolkitHost >& InitToolkitHost, USMBlueprint* Blueprint)
{
	// Blueprint is already current unless it was saved by a newer version of the plugin.
	FSMVersionUtils::SetToLatestVersion(Blueprint);
	
	LoadedBlueprint = MakeWeakObjectPtr(Blueprint);
	
	if (!Toolbar.IsValid())
	{
		Toolbar = MakeShareable(new FBlueprintEditorToolbar(SharedThis(this)));
	}

	// So the play bar matches the level bar.
	GetToolkitCommands()->Append(FPlayWorldCommands::GlobalPlayWorldActions.ToSharedRef());

	CreateDefaultCommands();
	
	// Register default and custom commands.
	BindCommands();

	RegisterMenus();
	
	const TSharedRef<FTabManager::FLayout> DummyLayout = FTabManager::NewLayout("NullLayout")->AddArea(FTabManager::NewPrimaryArea());
	const bool bCreateDefaultStandaloneMenu = true;
	const bool bCreateDefaultToolbar = true;
	InitAssetEditor(Mode, InitToolkitHost, FSMEditorModes::SMEditorName, DummyLayout, bCreateDefaultStandaloneMenu, bCreateDefaultToolbar, Blueprint, false);

	TArray<UBlueprint*> Blueprints;
	Blueprints.Add(Blueprint);

	CommonInitialization(Blueprints, false);

	TSharedPtr<FSMBlueprintEditor> Editor(SharedThis(this));

	TSharedRef<FApplicationMode> BlueprintMode = MakeShareable(new FSMEditorBlueprintMode(Editor));
	AddApplicationMode(BlueprintMode->GetModeName(), BlueprintMode);

	ExtendMenu();
	ExtendToolbar();
	RegenerateMenusAndToolbars();

	// This does the actual layout generation.
	SetCurrentMode(BlueprintMode->GetModeName());

	PostLayoutBlueprintEditorInitialization();

	OnDebugObjectSetHandle = Blueprint->OnSetObjectBeingDebugged().AddRaw(this, &FSMBlueprintEditor::OnDebugObjectSet);
}

void FSMBlueprintEditor::CreateDefaultCommands()
{
	FBlueprintEditor::CreateDefaultCommands();

	// Might extend.
}

void FSMBlueprintEditor::RefreshEditors(ERefreshBlueprintEditorReason::Type Reason)
{
	CloseInvalidTabs();
	FBlueprintEditor::RefreshEditors(Reason);
}

void FSMBlueprintEditor::CloseInvalidTabs()
{
	/*
	 * HACK and work around for UE4 crashing on the second time you undo the creation of a graph while the tab is open.
	 *
	 * We check if a graph is problematic and manually close the tab.
	 *
	 * The problem affects animation state machines as well. Isolating the fix here rather than in separate undo events so
	 * if the engine is ever patched we can just remove it here.
	 *
	 * Steps to reproduce:
	 *
	 * 1. Copy and paste a state
	 * 2. Open the state
	 * 3. Edit undo
	 * WORKS!
	 *
	 * 4. Paste the state again
	 * 5. Open the state
	 * 6. Edit undo
	 * CRASH!
	 */

	for (TSharedPtr<SDockTab> Tab : DocumentManager->GetAllDocumentTabs())
	{
		const TSharedRef<SGraphEditor> GraphEditor = StaticCastSharedRef<SGraphEditor>(Tab->GetContent());
		UEdGraph* CurrentGraph = GraphEditor->GetCurrentGraph();
		if (CurrentGraph == nullptr)
		{
			Tab->RequestCloseTab();
			continue;
		}

		if (CurrentGraph->GetSchema() == nullptr)
		{
			// Schema is gone after an undo... can't just close it. Interior methods still look for a schema.
			CurrentGraph->Schema = USMGraphSchema::StaticClass();
			Tab->RequestCloseTab();
		}

		// The above close doesn't like to work but the set schema fixes a crash. What we're left is
		// a tab with a null graph. Luckily we can verify the problem by checking the owning node's bound graph.
		if (USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(CurrentGraph->GetOuter()))
		{
			// This can also be null on 4.21 during normal deletion!
			if (Node->GetBoundGraph() == nullptr)
			{
				Tab->RequestCloseTab();
			}
		}
		// State machine definitions also risk crashing if the editor is open when you delete them by node. Found on 4.21.
		else if (USMGraphK2Node_StateMachineNode* RootNode = Cast<USMGraphK2Node_StateMachineNode>(CurrentGraph->GetOuter()))
		{
			if (RootNode->GetStateMachineGraph() == nullptr)
			{
				Tab->RequestCloseTab();
			}
		}
	}
}

void FSMBlueprintEditor::PostUndo(bool bSuccess)
{
	FBlueprintEditor::PostUndo(bSuccess);

	if (!bSuccess)
	{
		return;
	}

	// Collapsed Graphs can be problematic if a state or transition is deleted which contains a nested graph, and then the user undoes that action.
	// The graph will be present in the graph tree, but the node itself will say "Invalid Graph". This happens whether deleting either the state node or graph.
	// It works fine if deleting the entire state machine and undoing it. There is probably a better way of doing this. TODO: Collapsed Graph revamp.
	{
		UBlueprint* Blueprint = GetBlueprintObj();
		check(Blueprint);

		TArray<UEdGraph*> Graphs;
		Blueprint->GetAllGraphs(Graphs);

		USMGraphK2* FoundGraph;
		Graphs.FindItemByClass<USMGraphK2>(&FoundGraph);
		ensure(FoundGraph);

		FSMBlueprintEditorUtils::FixUpCollapsedGraphs(FSMBlueprintEditorUtils::GetTopLevelGraph(FoundGraph));
	}
}

FName FSMBlueprintEditor::GetToolkitFName() const
{
	return FName("FSMBlueprintEditor");
}

FText FSMBlueprintEditor::GetBaseToolkitName() const
{
	return LOCTEXT("SMBlueprintEditorAppLabel", "Logic Driver");
}

FText FSMBlueprintEditor::GetToolkitName() const
{
	const TArray<UObject *>& CurrentEditingObjects = GetEditingObjects();
	check(CurrentEditingObjects.Num() > 0);

	const UObject* EditingObject = CurrentEditingObjects[0];

	FFormatNamedArguments Args;
	Args.Add(TEXT("ObjectName"), FText::FromString(EditingObject->GetName()));

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 21
	const bool bDirtyState = EditingObject->GetOutermost()->IsDirty();
	Args.Add(TEXT("DirtyState"), bDirtyState ? FText::FromString(TEXT("*")) : FText::GetEmpty());
	return FText::Format(LOCTEXT("FSMBlueprintEditor", "{ObjectName}{DirtyState}"), Args);
#else
	// Dirty state handled by engine in 22+
	return FText::Format(LOCTEXT("FSMBlueprintEditor", "{ObjectName}"), Args);
#endif
}

FText FSMBlueprintEditor::GetToolkitToolTipText() const
{
	const UObject* EditingObject = GetEditingObject();

	check(EditingObject);

	return GetToolTipTextForObject(EditingObject);
}

FLinearColor FSMBlueprintEditor::GetWorldCentricTabColorScale() const
{
	return FLinearColor::White;
}

FString FSMBlueprintEditor::GetWorldCentricTabPrefix() const
{
	return TEXT("SMBlueprintEditor");
}

FString FSMBlueprintEditor::GetDocumentationLink() const
{
	return TEXT("https://logicdriver.recursoft.net/docs");
}

void FSMBlueprintEditor::ExtendMenu()
{
	if (MenuExtender.IsValid())
	{
		RemoveMenuExtender(MenuExtender);
		MenuExtender.Reset();
	}

	MenuExtender = MakeShareable(new FExtender);
	AddMenuExtender(MenuExtender);

	// add extensible menu if exists
	ISMSystemEditorModule& SMBlueprintEditorModule = FModuleManager::LoadModuleChecked<ISMSystemEditorModule>("SMSystemEditor");
	AddMenuExtender(SMBlueprintEditorModule.GetMenuExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));

	if (FSMBlueprintEditorUtils::GetProjectEditorSettings()->bEnableBlueprintMenuExtenders)
	{
		FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
		AddMenuExtender(BlueprintEditorModule.GetMenuExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));
	}
}

void FSMBlueprintEditor::ExtendToolbar()
{
	// If the ToolbarExtender is valid, remove it before rebuilding it
	if (ToolbarExtender.IsValid())
	{
		RemoveToolbarExtender(ToolbarExtender);
		ToolbarExtender.Reset();
	}

	ToolbarExtender = MakeShareable(new FExtender);

	AddToolbarExtender(ToolbarExtender);

	ISMSystemEditorModule& SMBlueprintEditorModule = FModuleManager::LoadModuleChecked<ISMSystemEditorModule>("SMSystemEditor");
	AddToolbarExtender(SMBlueprintEditorModule.GetToolBarExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));

	if (FSMBlueprintEditorUtils::GetProjectEditorSettings()->bEnableBlueprintToolbarExtenders)
	{
		FBlueprintEditorModule& BlueprintEditorModule = FModuleManager::LoadModuleChecked<FBlueprintEditorModule>("Kismet");
		AddToolbarExtender(BlueprintEditorModule.GetMenuExtensibilityManager()->GetAllExtenders(GetToolkitCommands(), GetEditingObjects()));
	}
}

void FSMBlueprintEditor::BindCommands()
{
	// Might extend.

}

void FSMBlueprintEditor::OnDebugObjectSet(UObject* Object)
{
	if (!LoadedBlueprint.IsValid())
	{
		return;
	}

	ResetBlueprintDebugStates();
}

void FSMBlueprintEditor::ResetBlueprintDebugStates()
{
	// Locate all sm nodes and reset the debug state to clear up visual ghosting from previous runs.

	TArray<USMGraphNode_Base*> GraphNodes;
	FSMBlueprintEditorUtils::GetAllNodesOfClassNested<USMGraphNode_Base>(LoadedBlueprint.Get(), GraphNodes);

	for (USMGraphNode_Base* GraphNode : GraphNodes)
	{
		GraphNode->ResetDebugState();
	}
}

void FSMBlueprintEditor::OnActiveTabChanged(TSharedPtr<SDockTab> PreviouslyActive, TSharedPtr<SDockTab> NewlyActivated)
{
	if (!NewlyActivated.IsValid())
	{
		TArray<UObject*> ObjArray;
		Inspector->ShowDetailsForObjects(ObjArray);
	}
	else
	{
		FBlueprintEditor::OnActiveTabChanged(PreviouslyActive, NewlyActivated);
	}
}

void FSMBlueprintEditor::OnSelectedNodesChangedImpl(const TSet<class UObject*>& NewSelection)
{
	FBlueprintEditor::OnSelectedNodesChangedImpl(NewSelection);

	if (SelectedStateMachineNode.IsValid())
	{
		SelectedStateMachineNode.Reset();
	}

	// if we only have one node selected, let it know
	if (NewSelection.Num() == 1)
	{
		USMGraphK2Node_Base* NewSelectedStateMachineGraphNode = Cast<USMGraphK2Node_Base>(*NewSelection.CreateConstIterator());
		if (NewSelectedStateMachineGraphNode != nullptr)
		{
			SelectedStateMachineNode = NewSelectedStateMachineGraphNode;
		}
	}
}

void FSMBlueprintEditor::OnCreateGraphEditorCommands(TSharedPtr<FUICommandList> GraphEditorCommandsList)
{
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().GoToGraph,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::GoToGraph),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanGoToGraph));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().GoToNodeBlueprint,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::GoToNodeBlueprint),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanGoToNodeBlueprint));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().CreateSelfTransition,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::CreateSingleNodeTransition),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanCreateSingleNodeTransition));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().CutAndMergeStates,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::CutCombineStates),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanCutOrCopyCombineStates));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().CopyAndMergeStates,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::CopyCombineStates),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanCutOrCopyCombineStates));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().CollapseToStateMachine,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::CollapseNodesToStateMachine),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanCollapseNodesToStateMachine));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ConvertToStateMachineReference,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ConvertStateMachineToReference),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanConvertStateMachineToReference));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ChangeStateMachineReference,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ChangeStateMachineReference),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanChangeStateMachineReference));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().JumpToStateMachineReference,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::JumpToStateMachineReference),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanJumpToStateMachineReference));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().EnableIntermediateGraph,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::EnableIntermediateGraph),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanEnableIntermediateGraph));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().DisableIntermediateGraph,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::DisableIntermediateGraph),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanDisableIntermediateGraph));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ReplaceWithStateMachine,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ReplaceWithStateMachine),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanReplaceWithStateMachine));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ReplaceWithStateMachineReference,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ReplaceWithStateMachineReference),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanReplaceWithStateMachineReference));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ReplaceWithStateMachineParent,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ReplaceWithStateMachineParent),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanReplaceWithStateMachineParent));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ReplaceWithState,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ReplaceWithState),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanReplaceWithState));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ReplaceWithConduit,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ReplaceWithConduit),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanReplaceWithConduit));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().GoToPropertyBlueprint,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::GoToPropertyBlueprint),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanGoToPropertyBlueprint));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().GoToPropertyGraph,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::GoToPropertyGraph),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanGoToPropertyGraph));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ConvertPropertyToGraphEdit,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ToggleGraphPropertyEdit),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanToggleGraphPropertyEdit));

	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().RevertPropertyToNodeEdit,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ToggleGraphPropertyEdit),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanToggleGraphPropertyEdit));
	
	GraphEditorCommandsList->MapAction(FSMEditorCommands::Get().ResetGraphProperty,
		FExecuteAction::CreateSP(this, &FSMBlueprintEditor::ClearGraphProperty),
		FCanExecuteAction::CreateSP(this, &FSMBlueprintEditor::CanClearGraphProperty));

	OnCreateGraphEditorCommandsEvent.Broadcast(this, GraphEditorCommandsList);
}

bool FSMBlueprintEditor::IsSelectedPropertyNodeValid() const
{
	if (!SelectedPropertyNode.IsValid())
	{
		return false;
	}

	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(Node))
		{
			return GraphNode->GetGraphPropertyNode(SelectedPropertyNode->GetPropertyNodeChecked()->GetGuid()) != nullptr;
		}
	}

	return false;
}

void FSMBlueprintEditor::CreateSingleNodeTransition()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(Node))
		{
			// This is a hack since we only want the context menu to be the way to self transition.
			StateNode->bCanTransitionToSelf = true;
			StateNode->GetSchema()->TryCreateConnection(StateNode->GetOutputPin(), StateNode->GetInputPin());
			StateNode->bCanTransitionToSelf = false;
		}
	}
}

bool FSMBlueprintEditor::CanCreateSingleNodeTransition() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(Node))
		{
			// Skip if already has self transition or it's an Any State Node.
			if(StateNode->HasTransitionFromNode(StateNode) || StateNode->IsA<USMGraphNode_AnyStateNode>())
			{
				continue;
			}

			return true;
		}
	}

	return false;
}

void FSMBlueprintEditor::CollapseNodesToStateMachine()
{
	const TSet<UObject*> Nodes = GetSelectedNodes();

	FSMBlueprintEditorUtils::CollapseNodesAndCreateStateMachine(Nodes);
}

bool FSMBlueprintEditor::CanCollapseNodesToStateMachine() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateNodeBase* StateNode = Cast<USMGraphNode_StateNodeBase>(Node))
		{
			return true;
		}
	}

	return false;
}

void FSMBlueprintEditor::CutCombineStates()
{
	FSMBlueprintEditorUtils::CombineStates(SelectedNodeForContext.Get(), GetSelectedNodes(), true);
	// Clear selection down the right clicked node. When the nodes are removed slate may not update the selection set otherwise and can cause a crash.
	ClearSelectionStateFor(SelectionState_Graph);
	AddToSelection(SelectedNodeForContext.Get());
}

void FSMBlueprintEditor::CopyCombineStates()
{
	FSMBlueprintEditorUtils::CombineStates(SelectedNodeForContext.Get(), GetSelectedNodes(), false);
}

bool FSMBlueprintEditor::CanCutOrCopyCombineStates() const
{
	if (!Cast<USMGraphNode_StateNode>(SelectedNodeForContext.Get()))
	{
		return false;
	}

	int32 MergeCount = 0;
	TSet<UObject*> Nodes = GetSelectedNodes();
	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateNode* StateNode = Cast<USMGraphNode_StateNode>(Node))
		{
			if (StateNode != SelectedNodeForContext.Get() && StateNode->IsUsingDefaultNodeClass() && StateNode->GetAllNodeStackTemplates().Num() == 0)
			{
				continue;
			}
			
			if (++MergeCount > 1)
			{
				break;
			}
		}
	}

	return MergeCount > 1;
}

void FSMBlueprintEditor::ConvertStateMachineToReference()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	USMGraphNode_StateMachineStateNode* StateMachineNode = nullptr;

	for (UObject* Node : Nodes)
	{
		StateMachineNode = CastChecked<USMGraphNode_StateMachineStateNode>(Node);
		break;
	}

	FSMBlueprintEditorUtils::ConvertStateMachineToReference(StateMachineNode);
}

bool FSMBlueprintEditor::CanConvertStateMachineToReference() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if(Node->IsA<USMGraphNode_StateMachineParentNode>())
		{
			continue;
		}
		
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			return !StateNode->IsStateMachineReference();
		}
	}

	return false;
}

void FSMBlueprintEditor::ChangeStateMachineReference()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

	FOpenAssetDialogConfig SelectAssetConfig;
	SelectAssetConfig.DialogTitleOverride = LOCTEXT("ChooseStateMachinePath", "Choose a state machine");
	SelectAssetConfig.bAllowMultipleSelection = false;
	SelectAssetConfig.AssetClassNames.Add(USMBlueprint::StaticClass()->GetFName());

	// Set the path to the current folder.
	if (UBlueprint* Blueprint = GetBlueprintObj())
	{
		UObject* AssetOuter = Blueprint->GetOuter();
		UPackage* AssetPackage = AssetOuter->GetOutermost();

		// Remove the file name and go directly to the folder.
		FString AssetPath = AssetPackage->GetName();
		const int LastSlashPos = AssetPath.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		SelectAssetConfig.DefaultPath = AssetPath.Left(LastSlashPos);
	}

	TArray<FAssetData> AssetData = ContentBrowserModule.Get().CreateModalOpenAssetDialog(SelectAssetConfig);
	if (AssetData.Num() == 1)
	{
		USMBlueprint *ReferencedBlueprint = Cast<USMBlueprint>(AssetData[0].GetAsset());
		if (ReferencedBlueprint != nullptr)
		{
			if (!ReferencedBlueprint->HasAnyFlags(RF_Transient) && !ReferencedBlueprint->IsPendingKill())
			{
				TSet<UObject*> Nodes = GetSelectedNodes();
				for (UObject* Node : Nodes)
				{
					if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
					{
						FScopedTransaction Transaction(TEXT(""), NSLOCTEXT("UnrealEd", "ChangeStateMachineReference", "Change State Machine Reference"), StateNode);
						StateNode->Modify();
						if (!StateNode->ReferenceStateMachine(ReferencedBlueprint))
						{
							Transaction.Cancel();
							return;
						}

						UBlueprint* Blueprint = FSMBlueprintEditorUtils::FindBlueprintForNodeChecked(StateNode);
						FSMBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
					}
				}
			}
		}
	}
}

bool FSMBlueprintEditor::CanChangeStateMachineReference() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			return StateNode->IsStateMachineReference();
		}
	}

	return false;
}

void FSMBlueprintEditor::JumpToStateMachineReference()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			StateNode->JumpToReference();
		}
	}
}

bool FSMBlueprintEditor::CanJumpToStateMachineReference() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			return StateNode->IsStateMachineReference();
		}
	}

	return false;
}

void FSMBlueprintEditor::EnableIntermediateGraph()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			StateNode->SetUseIntermediateGraph(true);
		}
	}
}

bool FSMBlueprintEditor::CanEnableIntermediateGraph() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			return !StateNode->ShouldUseIntermediateGraph();
		}
	}

	return false;
}

void FSMBlueprintEditor::DisableIntermediateGraph()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			StateNode->SetUseIntermediateGraph(false);
		}
	}
}

bool FSMBlueprintEditor::CanDisableIntermediateGraph() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_StateMachineStateNode* StateNode = Cast<USMGraphNode_StateMachineStateNode>(Node))
		{
			return StateNode->ShouldUseIntermediateGraph();
		}
	}

	return false;
}

void FSMBlueprintEditor::ReplaceWithStateMachine()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(Cast<USMGraphNode_Base>(Node));
	}
}

bool FSMBlueprintEditor::CanReplaceWithStateMachine() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent;
		USMGraphSchema::CanReplaceNodeWith(Cast<UEdGraphNode>(Node), bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent);

		return bCanAddStateMachine;
	}

	return false;
}

void FSMBlueprintEditor::ReplaceWithStateMachineReference()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		if(USMGraphNode_StateMachineStateNode* StateMachineRefNode = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(Cast<USMGraphNode_Base>(Node)))
		{
			StateMachineRefNode->ReferenceStateMachine(nullptr);
		}
	}
}

bool FSMBlueprintEditor::CanReplaceWithStateMachineReference() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent;
		USMGraphSchema::CanReplaceNodeWith(Cast<UEdGraphNode>(Node), bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent);

		return bCanAddStateMachineRef;
	}

	return false;
}

void FSMBlueprintEditor::ReplaceWithStateMachineParent()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineParentNode>(Cast<USMGraphNode_Base>(Node));
	}
}

bool FSMBlueprintEditor::CanReplaceWithStateMachineParent() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent;
		USMGraphSchema::CanReplaceNodeWith(Cast<UEdGraphNode>(Node), bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent);

		return bCanAddStateMachineParent;
	}

	return false;
}

void FSMBlueprintEditor::ReplaceWithState()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateNode>(Cast<USMGraphNode_Base>(Node));
	}
}

bool FSMBlueprintEditor::CanReplaceWithState() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent;
		USMGraphSchema::CanReplaceNodeWith(Cast<UEdGraphNode>(Node), bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent);

		return bCanAddState;
	}

	return false;
}

void FSMBlueprintEditor::ReplaceWithConduit()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	for (UObject* Node : Nodes)
	{
		FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_ConduitNode>(Cast<USMGraphNode_Base>(Node));
	}
}

bool FSMBlueprintEditor::CanReplaceWithConduit() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		bool bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent;
		USMGraphSchema::CanReplaceNodeWith(Cast<UEdGraphNode>(Node), bCanAddStateMachine, bCanAddStateMachineRef, bCanAddState, bCanAddConduit, bCanAddStateMachineParent);

		return bCanAddConduit;
	}

	return false;
}

void FSMBlueprintEditor::GoToGraph()
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(Node))
		{
			GraphNode->JumpToDefinition();
		}
	}
}

bool FSMBlueprintEditor::CanGoToGraph() const
{
	TSet<UObject*> Nodes = GetSelectedNodes();

	if (Nodes.Num() != 1)
	{
		return false;
	}

	for (UObject* Node : Nodes)
	{
		if (USMGraphNode_Base* GraphNode = Cast<USMGraphNode_Base>(Node))
		{
			// Skip if already has self transition.
			if (GraphNode->GetBoundGraph() == nullptr)
			{
				continue;
			}

			return true;
		}
	}

	return false;
}

void FSMBlueprintEditor::GoToNodeBlueprint()
{
	if (USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(GetSingleSelectedNode()))
	{
		if (UClass* Class = Node->GetNodeClass())
		{
			if (UBlueprint* NodeBlueprint = UBlueprint::GetBlueprintFromClass(Class))
			{
				if (const FSMNode_Base* DebugNode = FSMBlueprintEditorUtils::GetDebugNode(Node))
				{
					if (USMNodeInstance* NodeInstance = DebugNode->GetNodeInstance())
					{
						NodeBlueprint->SetObjectBeingDebugged(NodeInstance);
					}
				}

				FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(NodeBlueprint);
			}
		}
	}
}

bool FSMBlueprintEditor::CanGoToNodeBlueprint() const
{
	if (USMGraphNode_Base* Node = Cast<USMGraphNode_Base>(GetSingleSelectedNode()))
	{
		if (UClass* Class = Node->GetNodeClass())
		{
			if (UBlueprint::GetBlueprintFromClass(Class))
			{
				return true;
			}
		}
	}

	return false;
}

void FSMBlueprintEditor::GoToPropertyBlueprint()
{
	if (USMGraphNode_StateNode* Node = Cast<USMGraphNode_StateNode>(SelectedPropertyNode->GetOwningGraphNode()))
	{
		if (UBlueprint* PropertyBlueprint = SelectedPropertyNode->GetTemplateBlueprint())
		{
			if (USMNodeInstance* Template = SelectedPropertyNode->GetOwningTemplate())
			{
				if (const FSMNode_Base* DebugNode = FSMBlueprintEditorUtils::GetDebugNode(Node))
				{
					const int32 TemplateIndex = Node->GetIndexOfTemplate(Template->GetTemplateGuid());
					if (USMNodeInstance* NodeStackInstance = DebugNode->GetNodeInStack(TemplateIndex))
					{
						PropertyBlueprint->SetObjectBeingDebugged(NodeStackInstance);
					}
					else if (USMNodeInstance* NodeInstance = DebugNode->GetNodeInstance())
					{
						if (UBlueprint* NodeBlueprint = UBlueprint::GetBlueprintFromClass(NodeInstance->GetClass()))
						{
							// Node template not found, verify this is the node blueprint instead.
							if (NodeBlueprint == PropertyBlueprint)
							{
								PropertyBlueprint->SetObjectBeingDebugged(NodeInstance);
							}
						}
					}
				}
			}
			
			FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(PropertyBlueprint);
		}
	}
}

bool FSMBlueprintEditor::CanGoToPropertyBlueprint() const
{
	return IsSelectedPropertyNodeValid() && SelectedPropertyNode->GetTemplateBlueprint() != nullptr;
}

void FSMBlueprintEditor::GoToPropertyGraph()
{
	SelectedPropertyNode->JumpToPropertyGraph();
}

bool FSMBlueprintEditor::CanGoToPropertyGraph() const
{
	return IsSelectedPropertyNodeValid();
}

void FSMBlueprintEditor::ClearGraphProperty()
{
	SelectedPropertyNode->ResetProperty();
}

bool FSMBlueprintEditor::CanClearGraphProperty() const
{
	return IsSelectedPropertyNodeValid();
}

void FSMBlueprintEditor::ToggleGraphPropertyEdit()
{
	SelectedPropertyNode->GetPropertyGraph()->ToggleGraphPropertyEdit();
}

bool FSMBlueprintEditor::CanToggleGraphPropertyEdit() const
{
	if(IsSelectedPropertyNodeValid())
	{
		return SelectedPropertyNode->GetPropertyNodeChecked()->AllowToggleGraphEdit();
	}

	return false;
}

FSMNodeBlueprintEditor::FSMNodeBlueprintEditor()
{
}

FSMNodeBlueprintEditor::~FSMNodeBlueprintEditor()
{
}

void FSMNodeBlueprintEditor::OnBlueprintChangedImpl(UBlueprint* InBlueprint, bool bIsJustBeingCompiled)
{
	FBlueprintEditor::OnBlueprintChangedImpl(InBlueprint, bIsJustBeingCompiled);

	TArray<UBlueprint*> Blueprints;
	FSMBlueprintEditorUtils::GetDependentBlueprints(InBlueprint, Blueprints);

	for(UBlueprint* Blueprint : Blueprints)
	{
		if(Blueprint->IsA<USMBlueprint>() && !Blueprint->bIsRegeneratingOnLoad)
		{
			// First check for a circular dependency where this blueprint is also dependent on its dependent.
			// In that case we just want to continue because UE will handle this. Otherwise the compile fails with little information.
			TArray<UBlueprint*> OtherBlueprints;
			FSMBlueprintEditorUtils::GetDependentBlueprints(Blueprint, OtherBlueprints);
			if(OtherBlueprints.Contains(InBlueprint))
			{
				continue;	
			}

			// TODO: The first call to ensure cached dependencies may fix a rare crash involving a REINST template class of this class.
			FSMBlueprintEditorUtils::EnsureCachedDependenciesUpToDate(Blueprint);
			if (bIsJustBeingCompiled)
			{
				/* If this is part of a compile (compile button pressed) then attempt a full compile of the state machine. This will
				 * also refresh graph properties exposed on the node. */
				FSMBlueprintEditorUtils::ConditionallyCompileBlueprint(Blueprint, true, true);
			}
			else
			{
				// A change not caused by a compile. Mark the state machine dirty so it can be recompiled later.
				FSMBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
			}
		}
	}
}

FText FSMNodeBlueprintEditor::GetBaseToolkitName() const
{
	return LOCTEXT("SMNodeBlueprintEditorAppLabel", "Logic Driver");
}

FString FSMNodeBlueprintEditor::GetDocumentationLink() const
{
	return TEXT("https://logicdriver.recursoft.net/docs");
}

#undef LOCTEXT_NAMESPACE

