// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/SMNodeInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNodeInstance() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNodeDescription();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstanceInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FSMNodeDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMNodeDescription, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMNodeDescription"), sizeof(FSMNodeDescription), Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMNodeDescription>()
{
	return FSMNodeDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMNodeDescription(FSMNodeDescription::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMNodeDescription"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMNodeDescription")),new UScriptStruct::TCppStructOps<FSMNodeDescription>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMNodeDescription;
	struct Z_Construct_UScriptStruct_FSMNodeDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This information will be viewable when selecting new nodes or hovering over nodes.\n */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "This information will be viewable when selecting new nodes or hovering over nodes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMNodeDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The name of this node type. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The name of this node type." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Which category this should fall under. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Which category this should fall under." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The tooltip when selecting the action. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The tooltip when selecting the action." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMNodeDescription, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMNodeDescription_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMNodeDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMNodeDescription",
		sizeof(FSMNodeDescription),
		alignof(FSMNodeDescription),
		Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMNodeDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMNodeDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMNodeDescription"), sizeof(FSMNodeDescription), Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMNodeDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMNodeDescription_Hash() { return 2853034204U; }
	DEFINE_FUNCTION(USMNodeInstance::execEvaluateGraphProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateGraphProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIconTintColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetNodeIconTintColor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIconSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetNodeIconSize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetNodeIcon_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetNodeName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execHasUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execIsInEndState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInEndState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetTimeInState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeInState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetOwningStateMachineNodeInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateMachineInstance**)Z_Param__Result=P_THIS->GetOwningStateMachineNodeInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetStateMachineInstance)
	{
		P_GET_UBOOL(Z_Param_bTopMostInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetStateMachineInstance(Z_Param_bTopMostInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execConstructionScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConstructionScript_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMNodeInstance::execGetContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetContext();
		P_NATIVE_END;
	}
	static FName NAME_USMNodeInstance_ConstructionScript = FName(TEXT("ConstructionScript"));
	void USMNodeInstance::ConstructionScript()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_ConstructionScript),NULL);
	}
	static FName NAME_USMNodeInstance_GetNodeIcon = FName(TEXT("GetNodeIcon"));
	UTexture2D* USMNodeInstance::GetNodeIcon() const
	{
		SMNodeInstance_eventGetNodeIcon_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIcon),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USMNodeInstance_GetNodeIconSize = FName(TEXT("GetNodeIconSize"));
	FVector2D USMNodeInstance::GetNodeIconSize() const
	{
		SMNodeInstance_eventGetNodeIconSize_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIconSize),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_USMNodeInstance_GetNodeIconTintColor = FName(TEXT("GetNodeIconTintColor"));
	FLinearColor USMNodeInstance::GetNodeIconTintColor() const
	{
		SMNodeInstance_eventGetNodeIconTintColor_Parms Parms;
		const_cast<USMNodeInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMNodeInstance_GetNodeIconTintColor),&Parms);
		return Parms.ReturnValue;
	}
	void USMNodeInstance::StaticRegisterNativesUSMNodeInstance()
	{
		UClass* Class = USMNodeInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructionScript", &USMNodeInstance::execConstructionScript },
			{ "EvaluateGraphProperties", &USMNodeInstance::execEvaluateGraphProperties },
			{ "GetContext", &USMNodeInstance::execGetContext },
			{ "GetGuid", &USMNodeInstance::execGetGuid },
			{ "GetNodeIcon", &USMNodeInstance::execGetNodeIcon },
			{ "GetNodeIconSize", &USMNodeInstance::execGetNodeIconSize },
			{ "GetNodeIconTintColor", &USMNodeInstance::execGetNodeIconTintColor },
			{ "GetNodeName", &USMNodeInstance::execGetNodeName },
			{ "GetOwningStateMachineNodeInstance", &USMNodeInstance::execGetOwningStateMachineNodeInstance },
			{ "GetStateMachineInstance", &USMNodeInstance::execGetStateMachineInstance },
			{ "GetTimeInState", &USMNodeInstance::execGetTimeInState },
			{ "HasUpdated", &USMNodeInstance::execHasUpdated },
			{ "IsActive", &USMNodeInstance::execIsActive },
			{ "IsInEndState", &USMNodeInstance::execIsInEndState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Instance" },
		{ "Comment", "/** A construction script that runs when this node is placed in a graph or instantiated during run-time. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "A construction script that runs when this node is placed in a graph or instantiated during run-time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "ConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_ConstructionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_ConstructionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Evaluate graphs of properties exposed directly on this node. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Evaluate graphs of properties exposed directly on this node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "EvaluateGraphProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetContext_Statics
	{
		struct SMNodeInstance_eventGetContext_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The object which this node is running for. Determined by the owning state machine. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The object which this node is running for. Determined by the owning state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetContext", nullptr, nullptr, sizeof(SMNodeInstance_eventGetContext_Parms), Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics
	{
		struct SMNodeInstance_eventGetGuid_Parms
		{
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Unique identifier taking into account qualified path. Unique across blueprints if called after Instance initialization." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetGuid", nullptr, nullptr, sizeof(SMNodeInstance_eventGetGuid_Parms), Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the icon representing this node. Null by default. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the icon representing this node. Null by default." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIcon", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIcon_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIconSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the size to use when displaying the icon. Leave 0,0 to auto size. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the size to use when displaying the icon. Leave 0,0 to auto size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIconSize", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIconSize_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeIconTintColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Node Display" },
		{ "Comment", "/** Retrieve the tint to use when displaying the icon. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the tint to use when displaying the icon." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeIconTintColor", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeIconTintColor_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics
	{
		struct SMNodeInstance_eventGetNodeName_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Retrieve the node name. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve the node name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetNodeName", nullptr, nullptr, sizeof(SMNodeInstance_eventGetNodeName_Parms), Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics
	{
		struct SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms
		{
			USMStateMachineInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateMachineInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The instance of the direct state machine node this node is part of. Every node except the root state machine has an owning state machine node. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The instance of the direct state machine node this node is part of. Every node except the root state machine has an owning state machine node." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetOwningStateMachineNodeInstance", nullptr, nullptr, sizeof(SMNodeInstance_eventGetOwningStateMachineNodeInstance_Parms), Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics
	{
		struct SMNodeInstance_eventGetStateMachineInstance_Parms
		{
			bool bTopMostInstance;
			USMInstance* ReturnValue;
		};
		static void NewProp_bTopMostInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTopMostInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance_SetBit(void* Obj)
	{
		((SMNodeInstance_eventGetStateMachineInstance_Parms*)Obj)->bTopMostInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance = { "bTopMostInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventGetStateMachineInstance_Parms), &Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetStateMachineInstance_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_bTopMostInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve an owning blueprint state machine.\n\x09 * @param bTopMostInstance If the state machine is a reference return the top most instance.\n\x09 * @return The state machine instance this node is running for.\n\x09 */" },
		{ "CPP_Default_bTopMostInstance", "false" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Retrieve an owning blueprint state machine.\n@param bTopMostInstance If the state machine is a reference return the top most instance.\n@return The state machine instance this node is running for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetStateMachineInstance", nullptr, nullptr, sizeof(SMNodeInstance_eventGetStateMachineInstance_Parms), Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics
	{
		struct SMNodeInstance_eventGetTimeInState_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMNodeInstance_eventGetTimeInState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The current time spent in the state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The current time spent in the state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "GetTimeInState", nullptr, nullptr, sizeof(SMNodeInstance_eventGetTimeInState_Parms), Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_GetTimeInState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_GetTimeInState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics
	{
		struct SMNodeInstance_eventHasUpdated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventHasUpdated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventHasUpdated_Parms), &Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** State has updated at least once. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "State has updated at least once." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "HasUpdated", nullptr, nullptr, sizeof(SMNodeInstance_eventHasUpdated_Parms), Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_HasUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_HasUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsActive_Statics
	{
		struct SMNodeInstance_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsActive_Parms), &Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** If this node is active. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "If this node is active." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsActive", nullptr, nullptr, sizeof(SMNodeInstance_eventIsActive_Parms), Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics
	{
		struct SMNodeInstance_eventIsInEndState_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMNodeInstance_eventIsInEndState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMNodeInstance_eventIsInEndState_Parms), &Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** State Machine is in an end state or the state is an end state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "State Machine is in an end state or the state is an end state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMNodeInstance, nullptr, "IsInEndState", nullptr, nullptr, sizeof(SMNodeInstance_eventIsInEndState_Parms), Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMNodeInstance_IsInEndState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMNodeInstance_IsInEndState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMNodeInstance_NoRegister()
	{
		return USMNodeInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMNodeInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoEvalExposedProperties_MetaData[];
#endif
		static void NewProp_bAutoEvalExposedProperties_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoEvalExposedProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExposedPropertyOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposedPropertyOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExposedPropertyOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIconSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeIconSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeIconTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeIconTintColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayCustomIcon_MetaData[];
#endif
		static void NewProp_bDisplayCustomIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayCustomIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCustomColors_MetaData[];
#endif
		static void NewProp_bUseCustomColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCustomColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMNodeInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMNodeInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMNodeInstance_ConstructionScript, "ConstructionScript" }, // 3458567494
		{ &Z_Construct_UFunction_USMNodeInstance_EvaluateGraphProperties, "EvaluateGraphProperties" }, // 2042771985
		{ &Z_Construct_UFunction_USMNodeInstance_GetContext, "GetContext" }, // 1205428279
		{ &Z_Construct_UFunction_USMNodeInstance_GetGuid, "GetGuid" }, // 3904178713
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIcon, "GetNodeIcon" }, // 3490707595
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIconSize, "GetNodeIconSize" }, // 2616088311
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeIconTintColor, "GetNodeIconTintColor" }, // 128248245
		{ &Z_Construct_UFunction_USMNodeInstance_GetNodeName, "GetNodeName" }, // 2523185169
		{ &Z_Construct_UFunction_USMNodeInstance_GetOwningStateMachineNodeInstance, "GetOwningStateMachineNodeInstance" }, // 1962110192
		{ &Z_Construct_UFunction_USMNodeInstance_GetStateMachineInstance, "GetStateMachineInstance" }, // 2786450446
		{ &Z_Construct_UFunction_USMNodeInstance_GetTimeInState, "GetTimeInState" }, // 2178473290
		{ &Z_Construct_UFunction_USMNodeInstance_HasUpdated, "HasUpdated" }, // 2322168383
		{ &Z_Construct_UFunction_USMNodeInstance_IsActive, "IsActive" }, // 696643648
		{ &Z_Construct_UFunction_USMNodeInstance_IsInEndState, "IsInEndState" }, // 4233274789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The abstract base node instance class all state machine nodes derive from.\n * \n * To expose native member properties on the node they must be marked BlueprintReadWrite and not contain the meta keyword HideOnNode.\n */" },
		{ "DisplayName", "State Machine Node Class Base" },
		{ "HideCategories", "SMNodeInstance" },
		{ "IncludePath", "Nodes/SMNodeInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The abstract base node instance class all state machine nodes derive from.\n\nTo expose native member properties on the node they must be marked BlueprintReadWrite and not contain the meta keyword HideOnNode." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Properties marked as public will be exposed on this node as a graph.\n\x09 * \n\x09 * When this is true that graph will automatically evaluate on state entry.\n\x09 * When this is false you should manually call EvaluateGraphProperties().\n\x09 * \n\x09 * Graph properties are only valid for nodes deriving from USMStateInstance_Base.\n\x09 */" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Properties marked as public will be exposed on this node as a graph.\n\nWhen this is true that graph will automatically evaluate on state entry.\nWhen this is false you should manually call EvaluateGraphProperties().\n\nGraph properties are only valid for nodes deriving from USMStateInstance_Base." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bAutoEvalExposedProperties = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties = { "bAutoEvalExposedProperties", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_Inner = { "ExposedPropertyOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMGraphProperty, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/** Override graph property values. Match the variable name with the variable you want to override. Property must be instance editable. */" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Override graph property values. Match the variable name with the variable you want to override. Property must be instance editable." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides = { "ExposedPropertyOverrides", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, ExposedPropertyOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * The icon to use when displaying this node.\n\x09 * This exists in run-time as well in case this image is needed for purposes outside of editor use. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The icon to use when displaying this node.\nThis exists in run-time as well in case this image is needed for purposes outside of editor use." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon = { "NodeIcon", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The size of the node icon. Leave 0,0 to auto size. */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The size of the node icon. Leave 0,0 to auto size." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize = { "NodeIconSize", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** The tint color to apply to the node icon. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "The tint color to apply to the node icon." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor = { "NodeIconTintColor", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeIconTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Describe the node. This provides information to the context menu and to tooltips. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Describe the node. This provides information to the context menu and to tooltips." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription = { "NodeDescription", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeDescription), Z_Construct_UScriptStruct_FSMNodeDescription, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Override editor default icon with the custom icon chosen. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Override editor default icon with the custom icon chosen." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bDisplayCustomIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon = { "bDisplayCustomIcon", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** Override editor preference colors. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Override editor preference colors." },
	};
#endif
	void Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_SetBit(void* Obj)
	{
		((USMNodeInstance*)Obj)->bUseCustomColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors = { "bUseCustomColors", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMNodeInstance), &Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The standard color for this node. */" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "bUseCustomColors" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "The standard color for this node." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "Comment", "/** Assigned from the editor and used in tracking specific templates. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNodeInstance.h" },
		{ "ToolTip", "Assigned from the editor and used in tracking specific templates." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMNodeInstance, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMNodeInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bAutoEvalExposedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_ExposedPropertyOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeIconTintColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bDisplayCustomIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_bUseCustomColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_NodeColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMNodeInstance_Statics::NewProp_TemplateGuid,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMNodeInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(USMNodeInstance, ISMInstanceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMNodeInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMNodeInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMNodeInstance_Statics::ClassParams = {
		&USMNodeInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMNodeInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMNodeInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMNodeInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMNodeInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMNodeInstance, 1506104829);
	template<> SMSYSTEM_API UClass* StaticClass<USMNodeInstance>()
	{
		return USMNodeInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMNodeInstance(Z_Construct_UClass_USMNodeInstance, &USMNodeInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMNodeInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMNodeInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
