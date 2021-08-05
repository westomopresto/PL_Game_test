// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMStateMachineInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateMachineInstance() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator();
// End Cross Module References
	DEFINE_FUNCTION(USMStateMachineInstance::execGetEntryStates)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_EntryStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEntryStates(Z_Param_Out_EntryStates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execGetAllStateInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStateInstances(Z_Param_Out_StateInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnEndStateReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndStateReached_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineInstance::execOnStateMachineCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateMachineCompleted_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateMachineInstance_OnEndStateReached = FName(TEXT("OnEndStateReached"));
	void USMStateMachineInstance::OnEndStateReached()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnEndStateReached),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateInitialized = FName(TEXT("OnStateInitialized"));
	void USMStateMachineInstance::OnStateInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateInitialized),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateMachineCompleted = FName(TEXT("OnStateMachineCompleted"));
	void USMStateMachineInstance::OnStateMachineCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateMachineCompleted),NULL);
	}
	static FName NAME_USMStateMachineInstance_OnStateShutdown = FName(TEXT("OnStateShutdown"));
	void USMStateMachineInstance::OnStateShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineInstance_OnStateShutdown),NULL);
	}
	void USMStateMachineInstance::StaticRegisterNativesUSMStateMachineInstance()
	{
		UClass* Class = USMStateMachineInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllStateInstances", &USMStateMachineInstance::execGetAllStateInstances },
			{ "GetEntryStates", &USMStateMachineInstance::execGetEntryStates },
			{ "OnEndStateReached", &USMStateMachineInstance::execOnEndStateReached },
			{ "OnStateInitialized", &USMStateMachineInstance::execOnStateInitialized },
			{ "OnStateMachineCompleted", &USMStateMachineInstance::execOnStateMachineCompleted },
			{ "OnStateShutdown", &USMStateMachineInstance::execOnStateShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics
	{
		struct SMStateMachineInstance_eventGetAllStateInstances_Parms
		{
			TArray<USMStateInstance_Base*> StateInstances;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner = { "StateInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances = { "StateInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetAllStateInstances_Parms, StateInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::NewProp_StateInstances,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Retrieve all contained state instances defined within the state machine graph this instance represents. These can be States, State Machines, and Conduits. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Retrieve all contained state instances defined within the state machine graph this instance represents. These can be States, State Machines, and Conduits." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetAllStateInstances", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetAllStateInstances_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics
	{
		struct SMStateMachineInstance_eventGetEntryStates_Parms
		{
			TArray<USMStateInstance_Base*> EntryStates;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryStates_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EntryStates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates_Inner = { "EntryStates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates = { "EntryStates", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineInstance_eventGetEntryStates_Parms, EntryStates), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::NewProp_EntryStates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return the entry states of the state machine. Generally one unless parallel states are used. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Return the entry states of the state machine. Generally one unless parallel states are used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "GetEntryStates", nullptr, nullptr, sizeof(SMStateMachineInstance_eventGetEntryStates_Parms), Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when an end state has been reached. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called when an end state has been reached." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnEndStateReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before OnStateBegin and before transitions are initialized. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called before OnStateBegin and before transitions are initialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after the state machine has completed its internal states. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called after the state machine has completed its internal states." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateMachineCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after OnStateEnd and after transitions are shutdown. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Called after OnStateEnd and after transitions are shutdown." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineInstance, nullptr, "OnStateShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateMachineInstance_NoRegister()
	{
		return USMStateMachineInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatePlacementRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatePlacementRules;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWaitForEndState_MetaData[];
#endif
		static void NewProp_bWaitForEndState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaitForEndState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReuseCurrentState_MetaData[];
#endif
		static void NewProp_bReuseCurrentState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReuseCurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReuseIfNotEndState_MetaData[];
#endif
		static void NewProp_bReuseIfNotEndState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReuseIfNotEndState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateMachineInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetAllStateInstances, "GetAllStateInstances" }, // 2320130299
		{ &Z_Construct_UFunction_USMStateMachineInstance_GetEntryStates, "GetEntryStates" }, // 607252767
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnEndStateReached, "OnEndStateReached" }, // 2311855168
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateInitialized, "OnStateInitialized" }, // 3509036466
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateMachineCompleted, "OnStateMachineCompleted" }, // 3132801086
		{ &Z_Construct_UFunction_USMStateMachineInstance_OnStateShutdown, "OnStateShutdown" }, // 3199576215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The base class for state machine nodes. These are different from regular state machines (SMInstance) in that they can be assigned to a state machine directly\n * either in the class defaults or in the details panel of a nested state machine node. Think of this as giving a state machine a 'type' which allows you to\n * identify it in rule behavior. This is still considered a state as well which allows access to hooking into Start, Update, and End events even when placed as\n * a nested state machine.\n */" },
		{ "DisplayName", "State Machine Class" },
		{ "HideCategories", "SMStateMachineInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateMachineInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "The base class for state machine nodes. These are different from regular state machines (SMInstance) in that they can be assigned to a state machine directly\neither in the class defaults or in the details panel of a nested state machine node. Think of this as giving a state machine a 'type' which allows you to\nidentify it in rule behavior. This is still considered a state as well which allows access to hooking into Start, Update, and End events even when placed as\na nested state machine." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of states are allowed or disallowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of states are allowed or disallowed. Default is all." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules = { "StatePlacementRules", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineInstance, StatePlacementRules), Z_Construct_UScriptStruct_FSMStateMachineNodePlacementValidator, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * Wait for an end state to be hit before evaluating transitions or being considered an end state itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Wait for an end state to be hit before evaluating transitions or being considered an end state itself." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bWaitForEndState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState = { "bWaitForEndState", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * When true the current state is reused on end/start.\n\x09 * When false the current state is cleared on end and the initial state used on start.\n\x09 * References will inherit this behavior.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "When true the current state is reused on end/start.\nWhen false the current state is cleared on end and the initial state used on start.\nReferences will inherit this behavior." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bReuseCurrentState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState = { "bReuseCurrentState", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData[] = {
		{ "Category", "State Machine" },
		{ "Comment", "/**\n\x09 * Do not reuse if in an end state.\n\x09 * References will inherit this behavior.\n\x09 */" },
		{ "EditCondition", "bReuseCurrentState" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateMachineInstance.h" },
		{ "ToolTip", "Do not reuse if in an end state.\nReferences will inherit this behavior." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_SetBit(void* Obj)
	{
		((USMStateMachineInstance*)Obj)->bReuseIfNotEndState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState = { "bReuseIfNotEndState", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineInstance), &Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_StatePlacementRules,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bWaitForEndState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseCurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineInstance_Statics::NewProp_bReuseIfNotEndState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateMachineInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineInstance_Statics::ClassParams = {
		&USMStateMachineInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateMachineInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateMachineInstance, 3381051177);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineInstance>()
	{
		return USMStateMachineInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateMachineInstance(Z_Construct_UClass_USMStateMachineInstance, &USMStateMachineInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateMachineInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
