// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#include "Blueprints/SMBlueprint.h"
#include "SMTestHelpers.h"
#include "Utilities/SMBlueprintEditorUtils.h"
#include "SMTestContext.h"
#include "SMBlueprintFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Graph/SMGraph.h"
#include "Graph/SMStateGraph.h"
#include "Graph/SMTextPropertyGraph.h"
#include "Graph/Schema/SMGraphK2Schema.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"
#include "Graph/Nodes/SMGraphNode_StateNode.h"
#include "Graph/Nodes/SMGraphNode_StateMachineEntryNode.h"
#include "Graph/Nodes/SMGraphNode_TransitionEdge.h"
#include "Graph/Nodes/SMGraphNode_StateMachineStateNode.h"
#include "Graph/Nodes/SMGraphNode_ConduitNode.h"
#include "Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h"


#if WITH_DEV_AUTOMATION_TESTS

#if PLATFORM_DESKTOP

/**
 * Create node class blueprints.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCreateNodeClassTest, "SMTests.NodeClassCreateBP", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FCreateNodeClassTest::RunTest(const FString& Parameters)
{
	// Create node classes.
	FAssetHandler StateAsset;
	if (!TestHelpers::TryCreateNewNodeAsset(this, StateAsset, USMStateInstance::StaticClass(), true))
	{
		return false;
	}
	
	return StateAsset.DeleteAsset(this);
}

/**
 * Select a node class and test making sure instance nodes are set and hit properly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeClassEvalVariableTest, "SMTests.NodeClassEvalVariable", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeClassEvalVariableTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	int32 TotalStates = 1;

	UEdGraphPin* LastStatePin = nullptr;

	// Build single state - state machine.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	////////////////////////
	// Test setting default value.
	////////////////////////
	const int32 TestDefaultInt = 12;
	
	USMGraphNode_StateNode* StateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());
	auto PropertyNodes = StateNode->GetAllPropertyGraphNodesAsArray();
	PropertyNodes[0]->GetSchema()->TrySetDefaultValue(*PropertyNodes[0]->GetResultPinChecked(), FString::FromInt(TestDefaultInt)); // TrySet needed to trigger DefaultValueChanged

	USMInstance* Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates, false);

	USMStateTestInstance* NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestDefaultInt + 1); // Default gets added to in the context.

	// Check manual evaluation. Alter the template directly rather than the class even though this isn't normally allowed.
	USMStateInstance* StateInstanceTemplate = CastChecked<USMStateInstance>(StateNode->GetNodeTemplate());
	// This will reset the begin evaluation.
	StateInstanceTemplate->bEvalGraphsOnUpdate = true;

	Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates, false);
	Instance->Update(0.f); // One more update to trigger Update eval.
	NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestDefaultInt); // Verify the value matches the default.
	// 
	////////////////////////
	// Test graph evaluation -- needs to be done from a variable.
	////////////////////////
	FName VarName = "NewVar";
	FEdGraphPinType VarType;
	VarType.PinCategory = UEdGraphSchema_K2::PC_Int;

	// Create new variable.
	const int32 TestVarDefaultValue = 15;
	FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, FString::FromInt(TestVarDefaultValue));

	// Get class property from new variable.
	FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

	// Place variable getter and wire to result node.
	FSMBlueprintEditorUtils::PlacePropertyOnGraph(PropertyNodes[0]->GetGraph(), NewProperty, PropertyNodes[0]->GetResultPinChecked(), nullptr);

	Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);
	NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestVarDefaultValue); // Verify the value evaluated properly.

	// Turn update state eval off.
	StateInstanceTemplate->bEvalGraphsOnUpdate = false;
	Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);
	NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestVarDefaultValue + 1); // Verify the value evaluated properly and was modified.

	// Disable auto evaluation all together.
	StateInstanceTemplate->bAutoEvalExposedProperties = false;
	Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates, false);

	NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestNotEqual("Default exposed value not evaluated", NodeInstance->ExposedInt, TestVarDefaultValue);

	// Manual evaluation.
	NodeInstance->EvaluateGraphProperties();
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestVarDefaultValue); // Verify the value evaluated properly.
	
	return NewAsset.DeleteAsset(this);
}

/**
 * Run a state machine consisting of 100 custom state classes with custom transitions.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstancesRunStateMachineTest, "SMTests.NodeInstancesRunStateMachine", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FNodeInstancesRunStateMachineTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	const int32 TotalStates = 100;

	UEdGraphPin* LastStatePin = nullptr;
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());
	TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);

	return true;
}

/**
 * Verify node instance struct wrapper methods work properly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FNodeInstanceMethodsTest, "SMTests.NodeInstanceMethods", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FNodeInstanceMethodsTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	int32 TotalStates = 2;

	{
		UEdGraphPin* LastStatePin = nullptr;
		//Verify default instances load correctly.
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateInstance::StaticClass(), USMTransitionInstance::StaticClass());
		int32 A, B, C;
		TestHelpers::RunStateMachineToCompletion(this, NewBP, A, B, C);
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph);
	}
	
	// Load test instances.
	UEdGraphPin* LastStatePin = nullptr;
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());
	FKismetEditorUtilities::CompileBlueprint(NewBP);
	
	USMTestContext* Context = NewObject<USMTestContext>();
	USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);
	
	FSMState_Base* InitialState = StateMachineInstance->GetRootStateMachine().GetSingleInitialState();
	USMStateInstance_Base* NodeInstance = CastChecked<USMStateInstance_Base>(InitialState->GetNodeInstance());
	InitialState->bAlwaysUpdate = true; // Needed since we are manually switching states later.

	{
		// Test root and entry nodes.
		
		USMStateMachineInstance* RootStateMachineInstance = StateMachineInstance->GetRootStateMachineInstance();
		TestNotNull("Root node not null", RootStateMachineInstance);
		TestEqual("Root node discoverable", RootStateMachineInstance, Cast<USMStateMachineInstance>(StateMachineInstance->GetRootStateMachine().GetNodeInstance()));

		TArray<USMStateInstance_Base*> EntryStates;
		RootStateMachineInstance->GetEntryStates(EntryStates);
		check(EntryStates.Num() == 1);

		TestEqual("Entry states discoverable", EntryStates[0], NodeInstance);
	}
	
	TestEqual("Correct state machine", NodeInstance->GetStateMachineInstance(), StateMachineInstance);
	TestEqual("Guids correct", NodeInstance->GetGuid(), InitialState->GetGuid());
	TestEqual("Name correct", NodeInstance->GetNodeName(), InitialState->GetNodeName());
	
	TestFalse("Initial state not active", NodeInstance->IsActive());
	StateMachineInstance->Start();
	TestTrue("Initial state active", NodeInstance->IsActive());

	InitialState->TimeInState = 3;
	TestEqual("Time correct", NodeInstance->GetTimeInState(), InitialState->TimeInState);

	FSMStateInfo StateInfo;
	NodeInstance->GetStateInfo(StateInfo);

	TestEqual("State info guids correct", StateInfo.Guid, InitialState->GetGuid());
	TestEqual("State info instance correct", StateInfo.NodeInstance, Cast<USMNodeInstance>(NodeInstance));
	TestFalse("Not a state machine", NodeInstance->IsStateMachine());
	TestFalse("Not in end state", NodeInstance->IsInEndState());
	TestFalse("Has not updated", NodeInstance->HasUpdated());
	TestNull("No transition to take", NodeInstance->GetTransitionToTake());

	USMStateInstance_Base* NextState = CastChecked<USMStateInstance_Base>(InitialState->GetOutgoingTransitions()[0]->GetToState()->GetNodeInstance());

	// Test searching nodes.
	TArray<USMNodeInstance*> FoundNodes;
	NodeInstance->GetAllNodesOfType(FoundNodes, USMStateInstance::StaticClass());

	TestEqual("All nodes found", FoundNodes.Num(), TotalStates);
	TestEqual("Correct state found", FoundNodes[0], Cast<USMNodeInstance>(NodeInstance));
	TestEqual("Correct state found", FoundNodes[1], Cast<USMNodeInstance>(NextState));

	// Verify state machine instance methods to retrieve node instances are correct.
	TArray<USMStateInstance_Base*> StateInstances;
	StateMachineInstance->GetAllStateInstances(StateInstances);
	TestEqual("All states found", StateInstances.Num(), StateMachineInstance->GetStateMap().Num());
	for (USMStateInstance_Base* StateInstance : StateInstances)
	{
		USMStateInstance_Base* FoundStateInstance = StateMachineInstance->GetStateInstanceByGuid(StateInstance->GetGuid());
		TestEqual("State instance retrieved from sm instance", FoundStateInstance, StateInstance);
	}
	
	TArray<USMTransitionInstance*> TransitionInstances;
	StateMachineInstance->GetAllTransitionInstances(TransitionInstances);
	TestEqual("All transitions found", TransitionInstances.Num(), StateMachineInstance->GetTransitionMap().Num());
	for (USMTransitionInstance* TransitionInstance : TransitionInstances)
	{
		USMTransitionInstance* FoundTransitionInstance = StateMachineInstance->GetTransitionInstanceByGuid(TransitionInstance->GetGuid());
		TestEqual("Transition instance retrieved from sm instance", FoundTransitionInstance, TransitionInstance);
	}
	
	// Test transition instance.
	USMTransitionInstance* NextTransition = CastChecked<USMTransitionInstance>(InitialState->GetOutgoingTransitions()[0]->GetNodeInstance());
	{
		TArray<USMTransitionInstance*> Transitions;
		NodeInstance->GetOutgoingTransitions(Transitions);

		TestEqual("One outgoing transition", Transitions.Num(), 1);
		USMTransitionInstance* TransitionInstance = Transitions[0];

		TestEqual("Transition instance correct", TransitionInstance, NextTransition);
		
		FSMTransitionInfo TransitionInfo;
		TransitionInstance->GetTransitionInfo(TransitionInfo);

		TestEqual("Transition info instance correct", TransitionInfo.NodeInstance, Cast<USMNodeInstance>(NextTransition));

		TestEqual("Prev state correct", TransitionInstance->GetPreviousStateInstance(), NodeInstance);
		TestEqual("Next state correct", TransitionInstance->GetNextStateInstance(), NextState);
	}
	
	NodeInstance->SwitchToLinkedState(NextState);

	TestFalse("State no longer active", NodeInstance->IsActive());
	TestTrue("Node has updated from bAlwaysUpdate", NodeInstance->HasUpdated());
	TestEqual("Transition to take set", NodeInstance->GetTransitionToTake(), NextTransition);
	
	USMTransitionInstance* PreviousTransition = CastChecked<USMTransitionInstance>(((FSMState_Base*)NextState->GetOwningNode())->GetIncomingTransitions()[0]->GetNodeInstance());
	{
		TestEqual("Previous transition is correct instance", PreviousTransition, NextTransition);
		
		TArray<USMTransitionInstance*> Transitions;
		NextState->GetIncomingTransitions(Transitions);

		TestEqual("One incoming transition", Transitions.Num(), 1);
		USMTransitionInstance* TransitionInstance = Transitions[0];

		TestEqual("Transition instance correct", TransitionInstance, PreviousTransition);

		FSMTransitionInfo TransitionInfo;
		TransitionInstance->GetTransitionInfo(TransitionInfo);

		TestEqual("Transition info instance correct", TransitionInfo.NodeInstance, Cast<USMNodeInstance>(PreviousTransition));

		TestEqual("Prev state correct", TransitionInstance->GetPreviousStateInstance(), NodeInstance);
		TestEqual("Next state correct", TransitionInstance->GetNextStateInstance(), NextState);
	}

	NodeInstance = CastChecked<USMStateInstance_Base>(StateMachineInstance->GetSingleActiveState()->GetNodeInstance());
	TestTrue("Is end state", NodeInstance->IsInEndState());

	//  Test nested reference FSM can retrieve transitions.
	{
		LastStatePin = nullptr;
		FSMBlueprintEditorUtils::RemoveAllNodesFromGraph(StateMachineGraph, NewBP);
		TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin);

		USMGraphNode_StateMachineStateNode* NestedFSM = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(CastChecked<USMGraphNode_StateNodeBase>(StateMachineGraph->EntryNode->GetOutputNode()));
		FKismetEditorUtilities::CompileBlueprint(NewBP);

		USMBlueprint* NewReferencedBlueprint = FSMBlueprintEditorUtils::ConvertStateMachineToReference(NestedFSM, false, nullptr, nullptr);

		Context = NewObject<USMTestContext>();
		StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);
		USMStateMachineInstance* FSMClass = CastChecked< USMStateMachineInstance>(StateMachineInstance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());

		TArray<USMTransitionInstance*> Transitions;
		FSMClass->GetOutgoingTransitions(Transitions);
		TestEqual("Outgoing transitions found of reference FSM", Transitions.Num(), 1);
	}
	
	return true;
}

/**
 * Test nested state machines with a state machine class set evaluate graphs properly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineClassInstanceTest, "SMTests.StateMachineClassInstance", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FStateMachineClassInstanceTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	int32 TotalStates = 2;

	UEdGraphPin* LastStatePin = nullptr;

	// Build state machine.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());

	USMGraphNode_StateMachineStateNode* NestedFSMNode = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(CastChecked<USMGraphNode_Base>(StateMachineGraph->GetEntryNode()->GetOutputNode()));
	USMGraphNode_StateMachineStateNode* NestedFSMNode2 = FSMBlueprintEditorUtils::ConvertNodeTo<USMGraphNode_StateMachineStateNode>(NestedFSMNode->GetNextNode());

	TestHelpers::SetNodeClass(this, NestedFSMNode, USMStateMachineTestInstance::StaticClass());
	TestHelpers::SetNodeClass(this, NestedFSMNode2, USMStateMachineTestInstance::StaticClass());

	/*
	 * This part tests evaluating exposed variable blueprint graphs. There was a bug
	 * when more than one FSM was present that the graphs wouldn't evaluate properly, but default values would.
	 */
	
	// Create and wire a new variable to the first fsm.
	const int32 TestVarDefaultValue = 2;
	{
		FName VarName = "NewVar";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_Int;

		// Create new variable.
		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, FString::FromInt(TestVarDefaultValue));
		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);
		
		auto PropertyNode = NestedFSMNode->GetGraphPropertyNode("ExposedInt");

		// Place variable getter and wire to result node.
		TestTrue("Variable placed on graph", FSMBlueprintEditorUtils::PlacePropertyOnGraph(PropertyNode->GetGraph(), NewProperty, PropertyNode->GetResultPinChecked(), nullptr));
	}
	
	// Create and wire a second variable to the first fsm.
	const int32 TestVarDefaultValue2 = 4;
	{
		FName VarName = "NewVar2";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_Int;

		// Create new variable.
		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, FString::FromInt(TestVarDefaultValue2));
		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

		auto PropertyNode = NestedFSMNode2->GetGraphPropertyNode("ExposedInt");

		// Place variable getter and wire to result node.
		TestTrue("Variable placed on graph", FSMBlueprintEditorUtils::PlacePropertyOnGraph(PropertyNode->GetGraph(), NewProperty, PropertyNode->GetResultPinChecked(), nullptr));
	}

	FKismetEditorUtilities::CompileBlueprint(NewBP);
	
	USMTestContext* Context = NewObject<USMTestContext>();
	USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

	FSMState_Base* InitialState = StateMachineInstance->GetRootStateMachine().GetSingleInitialState();
	USMStateMachineTestInstance* NodeInstance = CastChecked<USMStateMachineTestInstance>(InitialState->GetNodeInstance());
	InitialState->bAlwaysUpdate = true; // Needed since we are manually switching states later.

	TestEqual("Correct state machine", NodeInstance->GetStateMachineInstance(), StateMachineInstance);
	TestEqual("Guids correct", NodeInstance->GetGuid(), InitialState->GetGuid());
	TestEqual("Name correct", NodeInstance->GetNodeName(), InitialState->GetNodeName());
	
	TestFalse("Initial state not active", NodeInstance->IsActive());
	
	TestEqual("Exposed var not set", NodeInstance->ExposedInt, 0);
	TestEqual("Root SM start not hit", NodeInstance->RootSMStartHit.Count, 0);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 0);
	StateMachineInstance->Start();
	TestEqual("Root SM start hit", NodeInstance->RootSMStartHit.Count, 1);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 0);
	TestEqual("Exposed var set", NodeInstance->ExposedInt, TestVarDefaultValue);
	
	TestTrue("Initial state active", NodeInstance->IsActive());
	InitialState->TimeInState = 3;
	TestEqual("Time correct", NodeInstance->GetTimeInState(), InitialState->TimeInState);
	
	FSMStateInfo StateInfo;
	NodeInstance->GetStateInfo(StateInfo);

	TestEqual("State info guids correct", StateInfo.Guid, InitialState->GetGuid());
	TestEqual("State info instance correct", StateInfo.NodeInstance, Cast<USMNodeInstance>(NodeInstance));
	TestTrue("Is a state machine", NodeInstance->IsStateMachine());
	TestFalse("Has not updated", NodeInstance->HasUpdated());
	TestNull("No transition to take", NodeInstance->GetTransitionToTake());

	USMStateMachineTestInstance* NextState = CastChecked<USMStateMachineTestInstance>(InitialState->GetOutgoingTransitions()[0]->GetToState()->GetNodeInstance());

	// Test transition instance.
	USMTransitionInstance* NextTransition = CastChecked<USMTransitionInstance>(InitialState->GetOutgoingTransitions()[0]->GetNodeInstance());
	{
		TArray<USMTransitionInstance*> Transitions;
		NodeInstance->GetOutgoingTransitions(Transitions);

		TestEqual("One outgoing transition", Transitions.Num(), 1);
		USMTransitionInstance* TransitionInstance = Transitions[0];

		TestEqual("Transition instance correct", TransitionInstance, NextTransition);

		FSMTransitionInfo TransitionInfo;
		TransitionInstance->GetTransitionInfo(TransitionInfo);

		TestEqual("Transition info instance correct", TransitionInfo.NodeInstance, Cast<USMNodeInstance>(NextTransition));

		TestEqual("Prev state correct", Cast<USMStateMachineTestInstance>(TransitionInstance->GetPreviousStateInstance()), NodeInstance);
		TestEqual("Next state correct", Cast<USMStateMachineTestInstance>(TransitionInstance->GetNextStateInstance()), NextState);
	}
	
	TestEqual("Exposed var not set", NextState->ExposedInt, 0);
	StateMachineInstance->Update(0.f);
	TestEqual("Exposed var set", NextState->ExposedInt, TestVarDefaultValue2);

	TestFalse("State no longer active", NodeInstance->IsActive());
	TestTrue("Node has updated from bAlwaysUpdate", NodeInstance->HasUpdated());
	TestEqual("Transition to take set", NodeInstance->GetTransitionToTake(), NextTransition);

	TestEqual("State begin hit", NodeInstance->StateBeginHit.Count, 1);
	TestEqual("State update not hit", NodeInstance->StateUpdateHit.Count, 1);
	TestEqual("State end not hit", NodeInstance->StateEndHit.Count, 1);
	
	NodeInstance = CastChecked<USMStateMachineTestInstance>(StateMachineInstance->GetSingleActiveState()->GetNodeInstance());
	TestTrue("Is end state", NodeInstance->IsInEndState());

	TestEqual("State begin hit", NodeInstance->StateBeginHit.Count, 1);
	TestEqual("State update not hit", NodeInstance->StateUpdateHit.Count, 0);
	TestEqual("State end not hit", NodeInstance->StateEndHit.Count, 0);

	TestEqual("Root SM start hit", NodeInstance->RootSMStartHit.Count, 1);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 0);

	StateMachineInstance->Stop();

	TestEqual("Root SM start hit", NodeInstance->RootSMStartHit.Count, 1);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 1);
	
	return true;
}

/**
 * Test nested state machine references with a state machine class set.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateMachineClassInstanceReferenceTest, "SMTests.StateMachineClassInstanceReference", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FStateMachineClassInstanceReferenceTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	UEdGraphPin* LastStatePin = nullptr;

	const int32 NestedStateCount = 1;
	
	USMGraphNode_StateMachineStateNode* NestedFSMNode = TestHelpers::BuildNestedStateMachine(this, StateMachineGraph, NestedStateCount, &LastStatePin, nullptr);
	
	UEdGraphPin* FromPin = NestedFSMNode->GetOutputPin();
	USMGraphNode_StateMachineStateNode* NestedFSMNode2 = TestHelpers::BuildNestedStateMachine(this, StateMachineGraph, NestedStateCount, &FromPin, nullptr);

	TestHelpers::SetNodeClass(this, NestedFSMNode, USMStateMachineTestInstance::StaticClass());
	TestHelpers::SetNodeClass(this, NestedFSMNode2, USMStateMachineTestInstance::StaticClass());
	TestHelpers::SetNodeClass(this, NestedFSMNode->GetNextTransition(), USMTransitionTestInstance::StaticClass());
	
	// Now convert the state machine to a reference.
	USMBlueprint* NewReferencedBlueprint = FSMBlueprintEditorUtils::ConvertStateMachineToReference(NestedFSMNode, false, nullptr, nullptr);
	TestNotNull("New referenced blueprint created", NewReferencedBlueprint);
	TestTrue("Nested state machine has had all nodes removed.", NestedFSMNode->GetBoundGraph()->Nodes.Num() == 1);

	FKismetEditorUtilities::CompileBlueprint(NewReferencedBlueprint);

	// Store handler information so we can delete the object.
	FString ReferencedPath = NewReferencedBlueprint->GetPathName();
	FAssetHandler ReferencedAsset(NewReferencedBlueprint->GetName(), USMBlueprint::StaticClass(), NewObject<USMBlueprintFactory>(), &ReferencedPath);
	ReferencedAsset.Object = NewReferencedBlueprint;

	UPackage* Package = FAssetData(NewReferencedBlueprint).GetPackage();
	ReferencedAsset.Package = Package;

	FKismetEditorUtilities::CompileBlueprint(NewBP);

	USMTestContext* Context = NewObject<USMTestContext>();
	USMInstance* StateMachineInstance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);

	// Locate the node instance of the reference.
	
	FSMStateMachine* InitialState = (FSMStateMachine*)StateMachineInstance->GetRootStateMachine().GetSingleInitialState();
	USMStateMachineTestInstance* NodeInstance = Cast<USMStateMachineTestInstance>(InitialState->GetNodeInstance());

	TestNotNull("Node instance from reference found", NodeInstance);

	if (!NodeInstance)
	{
		return false;
	}
	
	InitialState->bAlwaysUpdate = true; // Needed since we are manually switching states later.

	TestFalse("Initial state not active", NodeInstance->IsActive());

	TestEqual("Exposed var not set", NodeInstance->ExposedInt, 0);
	TestEqual("Root SM start not hit", NodeInstance->RootSMStartHit.Count, 0);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 0);
	TestEqual("Init not hit", NodeInstance->InitializeHit.Count, 0);
	TestEqual("Shutdown not hit", NodeInstance->ShutdownHit.Count, 0);
	StateMachineInstance->Start();
	TestEqual("Root SM start hit", NodeInstance->RootSMStartHit.Count, 1);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 0);
	TestEqual("Init hit", NodeInstance->InitializeHit.Count, 1);
	TestEqual("Shutdown not hit", NodeInstance->ShutdownHit.Count, 0);
	
	TestTrue("Initial state active", NodeInstance->IsActive());

	FSMStateInfo StateInfo;
	NodeInstance->GetStateInfo(StateInfo);

	TestEqual("State info instance correct", StateInfo.NodeInstance, Cast<USMNodeInstance>(NodeInstance));
	TestTrue("Is a state machine", NodeInstance->IsStateMachine());
	TestFalse("Has not updated", NodeInstance->HasUpdated());
	TestNull("No transition to take", NodeInstance->GetTransitionToTake());

	USMStateMachineTestInstance* NextState = CastChecked<USMStateMachineTestInstance>(InitialState->GetOutgoingTransitions()[0]->GetToState()->GetNodeInstance());

	// Test transition instance.
	USMTransitionTestInstance* NextTransition = CastChecked<USMTransitionTestInstance>(InitialState->GetOutgoingTransitions()[0]->GetNodeInstance());
	{
		TArray<USMTransitionInstance*> Transitions;
		NodeInstance->GetOutgoingTransitions(Transitions);

		TestEqual("One outgoing transition", Transitions.Num(), 1);
		USMTransitionInstance* TransitionInstance = Transitions[0];

		TestEqual("Transition instance correct", Cast<USMTransitionTestInstance>(TransitionInstance), NextTransition);

		FSMTransitionInfo TransitionInfo;
		TransitionInstance->GetTransitionInfo(TransitionInfo);

		TestEqual("Transition info instance correct", TransitionInfo.NodeInstance, Cast<USMNodeInstance>(NextTransition));

		TestEqual("Prev state correct", Cast<USMStateMachineTestInstance>(TransitionInstance->GetPreviousStateInstance()), NodeInstance);
		TestEqual("Next state correct", Cast<USMStateMachineTestInstance>(TransitionInstance->GetNextStateInstance()), NextState);

		TestTrue("FSM Init hit before transition", NodeInstance->InitializeHit.TimeStamp > 0 && NodeInstance->InitializeHit.TimeStamp < NextTransition->TransitionInitializedHit.TimeStamp);
	}

	NextTransition->bCanTransition = true;
	StateMachineInstance->Update(0.f);

	TestFalse("State no longer active", NodeInstance->IsActive());
	TestTrue("Node has updated from bAlwaysUpdate", NodeInstance->HasUpdated());
	TestEqual("Transition to take set", Cast<USMTransitionTestInstance>(NodeInstance->GetTransitionToTake()), NextTransition);

	TestEqual("State begin hit", NodeInstance->StateBeginHit.Count, 1);
	TestEqual("State update not hit", NodeInstance->StateUpdateHit.Count, 1);
	TestEqual("State end not hit", NodeInstance->StateEndHit.Count, 1);

	TestEqual("Init hit", NodeInstance->InitializeHit.Count, 1);
	TestEqual("Shutdown hit", NodeInstance->ShutdownHit.Count, 1);
	
	// Second node instance test (Normal fsm)
	{
		USMStateMachineTestInstance* SecondNodeInstance = CastChecked<USMStateMachineTestInstance>(StateMachineInstance->GetSingleActiveState()->GetNodeInstance());
		TestTrue("Is end state", SecondNodeInstance->IsInEndState());

		TestEqual("State begin hit", SecondNodeInstance->StateBeginHit.Count, 1);
		TestEqual("State update not hit", SecondNodeInstance->StateUpdateHit.Count, 0);
		TestEqual("State end not hit", SecondNodeInstance->StateEndHit.Count, 0);

		TestEqual("Root SM start hit", SecondNodeInstance->RootSMStartHit.Count, 1);
		TestEqual("Root SM end not hit", SecondNodeInstance->RootSMStopHit.Count, 0);

		StateMachineInstance->Stop();

		TestEqual("Root SM start hit", SecondNodeInstance->RootSMStartHit.Count, 1);
		TestEqual("Root SM end not hit", SecondNodeInstance->RootSMStopHit.Count, 1);
	}

	// Check first state reference fsm.
	TestEqual("Root SM start hit", NodeInstance->RootSMStartHit.Count, 1);
	TestEqual("Root SM end not hit", NodeInstance->RootSMStopHit.Count, 1);
	
	ReferencedAsset.DeleteAsset(this);
	return true;
}

/**
 * Test the extended editor text graph properties and make sure they format variables correctly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FSMTextGraphPropertyTest, "SMTests.TextGraphProperty", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

bool FSMTextGraphPropertyTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Create variables
	
	FName StrVar = "StrVar";
	FString StrVarValue = "TestString";
	FEdGraphPinType StrPinType;
	StrPinType.PinCategory = USMGraphK2Schema::PC_String;
	FBlueprintEditorUtils::AddMemberVariable(NewBP, StrVar, StrPinType, StrVarValue);
	
	FName IntVar = "IntVar";
	FString IntVarValue = "5";
	FEdGraphPinType IntPinType;
	IntPinType.PinCategory = USMGraphK2Schema::PC_Int;
	FBlueprintEditorUtils::AddMemberVariable(NewBP, IntVar, IntPinType, IntVarValue);

	USMTestObject* TestObject = NewObject<USMTestObject>();
	TestObject->AddToRoot();
	
	FName ObjVar = "ObjVar";
	FEdGraphPinType ObjPinType;
	ObjPinType.PinCategory = USMGraphK2Schema::PC_Object;
	ObjPinType.PinSubCategoryObject = TestObject->GetClass();
	FBlueprintEditorUtils::AddMemberVariable(NewBP, ObjVar, ObjPinType);

	FText NewText = FText::FromString("Hello, {StrVar}! How about {IntVar}? What about no parsing like `{IntVar}? But can I parse the object with a custom to text method? Object: {ObjVar}");
	FText ExpectedText = FText::FromString(FString::Printf(TEXT("Hello, %s! How about %s? What about no parsing like {%s}? But can I parse the object with a custom to text method? Object: %s"),
		*StrVarValue, *IntVarValue, *IntVar.ToString(), *TestObject->CustomToText().ToString()));
	
	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	int32 TotalStates = 1;

	UEdGraphPin* LastStatePin = nullptr;

	// Build single state - state machine.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMTextGraphState::StaticClass(), USMTransitionTestInstance::StaticClass());
	if (!NewAsset.SaveAsset(this))
	{
		return false;
	}

	USMGraphNode_StateNode* StateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());
	auto PropertyNodes = StateNode->GetAllPropertyGraphNodesAsArray();

	TestEqual("Only one property exposed on node", PropertyNodes.Num(), 1);
	
	USMGraphK2Node_TextPropertyNode* TextPropertyNode = CastChecked<USMGraphK2Node_TextPropertyNode>(PropertyNodes[0]);
	USMTextPropertyGraph* PropertyGraph = CastChecked<USMTextPropertyGraph>(TextPropertyNode->GetPropertyGraph());

	((FSMTextGraphProperty*)TextPropertyNode->GetPropertyNodeChecked())->TextSerializer.ToTextFunctionNames.Add(GET_FUNCTION_NAME_CHECKED(USMTestObject, CustomToText));

	PropertyGraph->SetNewText(NewText);

	// Run and check results.
	FKismetEditorUtilities::CompileBlueprint(NewBP);
	USMTestContext* Context = NewObject<USMTestContext>();
	USMInstance* Instance = TestHelpers::CreateNewStateMachineInstanceFromBP(this, NewBP, Context);
	FProperty* ObjProperty = FindFieldChecked<FProperty>(Instance->GetClass(), ObjVar);

	uint8* SourcePtr = (uint8*)TestObject;
	uint8* DestPtr = ObjProperty->ContainerPtrToValuePtr<uint8>(Instance);
	ObjProperty->CopyCompleteValue(DestPtr, SourcePtr);
	
	Instance->Start();
	
	USMTextGraphState* NodeInstance = CastChecked<USMTextGraphState>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Text graph evaluated manually", NodeInstance->EvaluatedText.ToString(), ExpectedText.ToString());

	return NewAsset.DeleteAsset(this);
}

/**
 * Verify states and variables can be added to the stack properly.
 */
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStateStackTest, "SMTests.StateStack", EAutomationTestFlags::ApplicationContextMask |
	EAutomationTestFlags::EditorContext | EAutomationTestFlags::ClientContext | EAutomationTestFlags::EngineFilter)

	bool FStateStackTest::RunTest(const FString& Parameters)
{
	FAssetHandler NewAsset;
	if (!TestHelpers::TryCreateNewStateMachineAsset(this, NewAsset, false))
	{
		return false;
	}

	USMBlueprint* NewBP = NewAsset.GetObjectAs<USMBlueprint>();

	// Find root state machine.
	USMGraphK2Node_StateMachineNode* RootStateMachineNode = FSMBlueprintEditorUtils::GetRootStateMachineNode(NewBP);

	// Find the state machine graph.
	USMGraph* StateMachineGraph = RootStateMachineNode->GetStateMachineGraph();

	// Total states to test.
	int32 TotalStates = 1;

	UEdGraphPin* LastStatePin = nullptr;

	// Build single state - state machine.
	TestHelpers::BuildLinearStateMachine(this, StateMachineGraph, TotalStates, &LastStatePin, USMStateTestInstance::StaticClass(), USMTransitionTestInstance::StaticClass());

	USMGraphNode_StateNode* StateNode = CastChecked<USMGraphNode_StateNode>(StateMachineGraph->GetEntryNode()->GetOutputNode());

	TestEqual("Empty state stack", StateNode->StateStack.Num(), 0);
	auto PropertyNodes = StateNode->GetAllPropertyGraphNodesAsArray();
	TestEqual("Initial state property node only", PropertyNodes.Num(), 1);


	// Add a state stack
	
	FStateStackContainer NewStateStackText{ USMTextGraphStateExtra::StaticClass() };
	StateNode->StateStack.Add(NewStateStackText);
	FStateStackContainer NewStateStackInt{ USMStateTestInstance::StaticClass() };
	StateNode->StateStack.Add(NewStateStackInt);
	StateNode->InitStateStack();
	StateNode->CreateGraphPropertyGraphs();
	FSMBlueprintEditorUtils::ConditionallyCompileBlueprint(NewBP);

	PropertyNodes = StateNode->GetAllPropertyGraphNodesAsArray();
	TestEqual("State stacks added", PropertyNodes.Num(), 4);

	TestEqual("First property graph is for original state", PropertyNodes[0]->GetOwningTemplate()->GetClass(), USMStateTestInstance::StaticClass());
	
	TestEqual("Next property graph is for state stack", PropertyNodes[1]->GetOwningTemplate()->GetClass(), USMTextGraphStateExtra::StaticClass());
	TestEqual("Next property graph is for state stack", PropertyNodes[2]->GetOwningTemplate()->GetClass(), USMTextGraphStateExtra::StaticClass());
	
	TestEqual("Last property graph is for state state", PropertyNodes[3]->GetOwningTemplate()->GetClass(), USMStateTestInstance::StaticClass());
	
	////////////////////////
	// Test setting default value.
	////////////////////////

	// State value
	const int32 StateDefaultInt = 12;
	PropertyNodes[0]->GetSchema()->TrySetDefaultValue(*PropertyNodes[0]->GetResultPinChecked(), FString::FromInt(StateDefaultInt)); // TrySet needed to trigger DefaultValueChanged

	// State stack string value
	FString DefaultStackStr = "ForStateStackString";
	PropertyNodes[1]->GetSchema()->TrySetDefaultValue(*PropertyNodes[1]->GetResultPinChecked(), DefaultStackStr); // TrySet needed to trigger DefaultValueChanged
	
	// State stack text graph value
	FText DefaultStackTextGraph = FText::FromString("ForStateStackTextGraph");
	USMGraphK2Node_TextPropertyNode* TextPropertyNode = CastChecked<USMGraphK2Node_TextPropertyNode>(PropertyNodes[2]);
	USMTextPropertyGraph* TextPropertyGraph = CastChecked<USMTextPropertyGraph>(TextPropertyNode->GetPropertyGraph());
	TextPropertyGraph->SetNewText(DefaultStackTextGraph);

	////////////////////////
	// Test executing default value.
	////////////////////////
	USMInstance* Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates, false);

	USMStateTestInstance* NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, StateDefaultInt + 1); // Default gets added to in the context.
	
	USMTextGraphStateExtra* StateStackInstance = CastChecked<USMTextGraphStateExtra>(NodeInstance->GetStateInStack(0));
	TestEqual("Default exposed value set and evaluated", StateStackInstance->EvaluatedText.ToString(), DefaultStackTextGraph.ToString()); // This also tests that on state begin is hit.
	TestEqual("Default exposed value set and evaluated", StateStackInstance->StringVar, DefaultStackStr);

	USMStateTestInstance* LastStateStackInstance = CastChecked<USMStateTestInstance>(NodeInstance->GetStateInStack(1));
	TestEqual("Stack evaluated", LastStateStackInstance->StateBeginHit.Count, 1);
	TestEqual("Stack evaluated", LastStateStackInstance->StateUpdateHit.Count, 1);
	TestEqual("Stack evaluated", LastStateStackInstance->StateEndHit.Count, 0);

	Instance->Stop();
	TestEqual("Stack evaluated", LastStateStackInstance->StateEndHit.Count, 1);

	TestEqual("Stack evaluated initialize", LastStateStackInstance->StateInitializedEventHit.Count, 1);
	TestEqual("Stack evaluated shutdown", LastStateStackInstance->StateShutdownEventHit.Count, 1);
	
	////////////////////////
	// Test graph evaluation -- needs to be done from a variable.
	////////////////////////

	// Create new variable.
	const int32 TestVarDefaultValue = 15;
	{
		FName VarName = "NewVar";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_Int;

		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, FString::FromInt(TestVarDefaultValue));

		// Get class property from new variable.
		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

		// Place variable getter and wire to result node.
		FSMBlueprintEditorUtils::PlacePropertyOnGraph(PropertyNodes[0]->GetGraph(), NewProperty, PropertyNodes[0]->GetResultPinChecked(), nullptr);
	}

	const FString TestStringDefaultValue = "StringVarDefaultValue";
	{
		FName VarName = "NewStrVar";
		FEdGraphPinType VarType;
		VarType.PinCategory = UEdGraphSchema_K2::PC_String;
		
		FBlueprintEditorUtils::AddMemberVariable(NewBP, VarName, VarType, TestStringDefaultValue);

		// Get class property from new variable.
		FProperty* NewProperty = FSMBlueprintEditorUtils::GetPropertyForVariable(NewBP, VarName);

		// Place variable getter and wire to result node.
		FSMBlueprintEditorUtils::PlacePropertyOnGraph(PropertyNodes[1]->GetGraph(), NewProperty, PropertyNodes[1]->GetResultPinChecked(), nullptr);
	}

	// Test results
	
	Instance = TestHelpers::TestLinearStateMachine(this, NewBP, TotalStates);
	NodeInstance = CastChecked<USMStateTestInstance>(Instance->GetRootStateMachine().GetSingleInitialState()->GetNodeInstance());
	TestEqual("Default exposed value set and evaluated", NodeInstance->ExposedInt, TestVarDefaultValue + 1);

	StateStackInstance = CastChecked<USMTextGraphStateExtra>(NodeInstance->GetStateInStack(0));
	TestEqual("Default exposed value set and evaluated", StateStackInstance->StringVar, TestStringDefaultValue);

	TArray<USMStateInstance_Base*> AllStackInstances;
	NodeInstance->GetAllStateStackInstances(AllStackInstances);
	TestEqual("Stack instances found", AllStackInstances.Num(), 2);

	USMTextGraphStateExtra* StackTextInstance = CastChecked<USMTextGraphStateExtra>(NodeInstance->GetStateInStack(0));
	USMStateTestInstance* StackTestInstance = CastChecked<USMStateTestInstance>(NodeInstance->GetStateInStack(1));
	// Test class search.
	
	{
		USMStateTestInstance* ClassFoundInstance = Cast<USMStateTestInstance>(NodeInstance->GetStateInStackByClass(USMStateTestInstance::StaticClass()));
		TestEqual("State stack found by class", ClassFoundInstance, StackTestInstance);
	}
	{
		USMTextGraphState* ClassFoundInstance = Cast<USMTextGraphState>(NodeInstance->GetStateInStackByClass(USMTextGraphState::StaticClass()));
		TestNull("Didn't find because child not searched for", ClassFoundInstance);
	}
	{
		USMTextGraphState* ClassFoundInstance = Cast<USMTextGraphState>(NodeInstance->GetStateInStackByClass(USMTextGraphState::StaticClass(), true));
		TestEqual("State stack found by child", ClassFoundInstance, Cast<USMTextGraphState>(StackTextInstance));
	}

	{
		TArray<USMStateInstance_Base*> FoundClassInstances;
		NodeInstance->GetAllStatesInStackOfClass(USMStateTestInstance::StaticClass(), FoundClassInstances);
		TestEqual("1 result found", FoundClassInstances.Num(), 1);
		TestTrue("Found stack instance", FoundClassInstances.Contains(StackTestInstance));
		
		NodeInstance->GetAllStatesInStackOfClass(USMStateTestInstance::StaticClass(), FoundClassInstances, true);
		TestEqual("1 result found even though children included", 1, FoundClassInstances.Num());
		TestTrue("Found stack instance", FoundClassInstances.Contains(StackTestInstance));
		
		NodeInstance->GetAllStatesInStackOfClass(USMStateInstance::StaticClass(), FoundClassInstances, true);
		TestEqual("All results found", FoundClassInstances.Num(), 2);
		TestTrue("Found stack instance", FoundClassInstances.Contains(StackTestInstance));
		TestTrue("Found stack instance", FoundClassInstances.Contains(StackTextInstance));
	}

	TestEqual("Stack could find node instance", StackTestInstance->GetStackOwnerInstance(), Cast<USMStateInstance_Base>(NodeInstance));
	TestEqual("Stack could find node instance", StackTextInstance->GetStackOwnerInstance(), Cast<USMStateInstance_Base>(NodeInstance));
	TestEqual("Node instance found itself", NodeInstance->GetStackOwnerInstance(), Cast<USMStateInstance_Base>(NodeInstance));
	
	return NewAsset.DeleteAsset(this);
}

#endif

#endif //WITH_DEV_AUTOMATION_TESTS