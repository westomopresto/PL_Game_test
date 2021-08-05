// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMStateInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateConnectionValidator();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateEndSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateEndSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::NewProp_StateInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateEndSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateEndSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateUpdateSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateUpdateSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateUpdateSignature_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_StateInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateUpdateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateUpdateSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnStateBeginSignature_Parms
		{
			USMStateInstance_Base* StateInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::NewProp_StateInstance = { "StateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnStateBeginSignature_Parms, StateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::NewProp_StateInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnStateBeginSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnStateBeginSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetNextStateByTransitionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetNextStateByTransitionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetTransitionByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSwitchToLinkedState)
	{
		P_GET_OBJECT(USMStateInstance_Base,Z_Param_NextStateInstance);
		P_GET_UBOOL(Z_Param_bRequireTransitionToPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SwitchToLinkedState(Z_Param_NextStateInstance,Z_Param_bRequireTransitionToPass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetTransitionToTake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMTransitionInstance**)Z_Param__Result=P_THIS->GetTransitionToTake();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetIncomingTransitions)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_Transitions);
		P_GET_UBOOL(Z_Param_bExcludeAlwaysFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIncomingTransitions(Z_Param_Out_Transitions,Z_Param_bExcludeAlwaysFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetOutgoingTransitions)
	{
		P_GET_TARRAY_REF(USMTransitionInstance*,Z_Param_Out_Transitions);
		P_GET_UBOOL(Z_Param_bExcludeAlwaysFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOutgoingTransitions(Z_Param_Out_Transitions,Z_Param_bExcludeAlwaysFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execEvaluateTransitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EvaluateTransitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execSetActive)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execIsStateMachine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStateMachine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execGetStateInfo)
	{
		P_GET_STRUCT_REF(FSMStateInfo,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStateInfo(Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnRootStateMachineStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootStateMachineStop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnRootStateMachineStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootStateMachineStart_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateUpdate_Implementation(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance_Base::execOnStateBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateBegin_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateInstance_Base_OnRootStateMachineStart = FName(TEXT("OnRootStateMachineStart"));
	void USMStateInstance_Base::OnRootStateMachineStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnRootStateMachineStart),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnRootStateMachineStop = FName(TEXT("OnRootStateMachineStop"));
	void USMStateInstance_Base::OnRootStateMachineStop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnRootStateMachineStop),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateBegin = FName(TEXT("OnStateBegin"));
	void USMStateInstance_Base::OnStateBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateBegin),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateEnd = FName(TEXT("OnStateEnd"));
	void USMStateInstance_Base::OnStateEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateEnd),NULL);
	}
	static FName NAME_USMStateInstance_Base_OnStateUpdate = FName(TEXT("OnStateUpdate"));
	void USMStateInstance_Base::OnStateUpdate(float DeltaSeconds)
	{
		SMStateInstance_Base_eventOnStateUpdate_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_Base_OnStateUpdate),&Parms);
	}
	void USMStateInstance_Base::StaticRegisterNativesUSMStateInstance_Base()
	{
		UClass* Class = USMStateInstance_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateTransitions", &USMStateInstance_Base::execEvaluateTransitions },
			{ "GetIncomingTransitions", &USMStateInstance_Base::execGetIncomingTransitions },
			{ "GetNextStateByTransitionIndex", &USMStateInstance_Base::execGetNextStateByTransitionIndex },
			{ "GetOutgoingTransitions", &USMStateInstance_Base::execGetOutgoingTransitions },
			{ "GetStateInfo", &USMStateInstance_Base::execGetStateInfo },
			{ "GetTransitionByIndex", &USMStateInstance_Base::execGetTransitionByIndex },
			{ "GetTransitionToTake", &USMStateInstance_Base::execGetTransitionToTake },
			{ "IsStateMachine", &USMStateInstance_Base::execIsStateMachine },
			{ "OnRootStateMachineStart", &USMStateInstance_Base::execOnRootStateMachineStart },
			{ "OnRootStateMachineStop", &USMStateInstance_Base::execOnRootStateMachineStop },
			{ "OnStateBegin", &USMStateInstance_Base::execOnStateBegin },
			{ "OnStateEnd", &USMStateInstance_Base::execOnStateEnd },
			{ "OnStateUpdate", &USMStateInstance_Base::execOnStateUpdate },
			{ "SetActive", &USMStateInstance_Base::execSetActive },
			{ "SwitchToLinkedState", &USMStateInstance_Base::execSwitchToLinkedState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Signals to the owning state machine to process transition evaluation.\n\x09 * This is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\n\x09 * All transitions are evaluated as normal starting from the root state machine down.\n\x09 * Depending on super state transitions it's possible the state machine this state is part of may exit.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Signals to the owning state machine to process transition evaluation.\nThis is similar to calling Update on the owner root state machine, however state update logic (Tick) won't execute.\nAll transitions are evaluated as normal starting from the root state machine down.\nDepending on super state transitions it's possible the state machine this state is part of may exit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "EvaluateTransitions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics
	{
		struct SMStateInstance_Base_eventGetIncomingTransitions_Parms
		{
			TArray<USMTransitionInstance*> Transitions;
			bool bExcludeAlwaysFalse;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static void NewProp_bExcludeAlwaysFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeAlwaysFalse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetIncomingTransitions_Parms, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetIncomingTransitions_Parms*)Obj)->bExcludeAlwaysFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse = { "bExcludeAlwaysFalse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetIncomingTransitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_Transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_bExcludeAlwaysFalse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return all incoming transition instances.\n\x09 * @param Transitions The incoming transitions.\n\x09 * @param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n\x09 * @return True if any transitions exist.\n\x09 */" },
		{ "CPP_Default_bExcludeAlwaysFalse", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return all incoming transition instances.\n@param Transitions The incoming transitions.\n@param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n@return True if any transitions exist." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetIncomingTransitions", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetIncomingTransitions_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics
	{
		struct SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms
		{
			int32 Index;
			USMStateInstance_Base* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return the next connected state given a transition index.\n\x09 * @param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\x09 *\n\x09 * @return The connected state or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return the next connected state given a transition index.\n@param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\n@return The connected state or nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetNextStateByTransitionIndex", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetNextStateByTransitionIndex_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics
	{
		struct SMStateInstance_Base_eventGetOutgoingTransitions_Parms
		{
			TArray<USMTransitionInstance*> Transitions;
			bool bExcludeAlwaysFalse;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Transitions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transitions;
		static void NewProp_bExcludeAlwaysFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeAlwaysFalse;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions_Inner = { "Transitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions = { "Transitions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetOutgoingTransitions_Parms, Transitions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetOutgoingTransitions_Parms*)Obj)->bExcludeAlwaysFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse = { "bExcludeAlwaysFalse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventGetOutgoingTransitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_Transitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_bExcludeAlwaysFalse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return all outgoing transition instances.\n\x09 * @param Transitions The outgoing transitions.\n\x09 * @param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n\x09 * @return True if any transitions exist.\n\x09 */" },
		{ "CPP_Default_bExcludeAlwaysFalse", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return all outgoing transition instances.\n@param Transitions The outgoing transitions.\n@param bExcludeAlwaysFalse Skip over transitions that can't ever be true.\n@return True if any transitions exist." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetOutgoingTransitions", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetOutgoingTransitions_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics
	{
		struct SMStateInstance_Base_eventGetStateInfo_Parms
		{
			FSMStateInfo State;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetStateInfo_Parms, State), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return read only information about the owning state. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return read only information about the owning state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetStateInfo", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetStateInfo_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics
	{
		struct SMStateInstance_Base_eventGetTransitionByIndex_Parms
		{
			int32 Index;
			USMTransitionInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionByIndex_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Return a transition given the transition index.\n\x09 * @param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\x09 *\n\x09 * @return The transition or nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Return a transition given the transition index.\n@param Index The array index of the transition. If transitions have manual priorities they should correlate with the index value.\n\n@return The transition or nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetTransitionByIndex", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetTransitionByIndex_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics
	{
		struct SMStateInstance_Base_eventGetTransitionToTake_Parms
		{
			USMTransitionInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventGetTransitionToTake_Parms, ReturnValue), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The transition this state will be taking. Generally only valid on EndState and if this state isn't an end state. May be null. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The transition this state will be taking. Generally only valid on EndState and if this state isn't an end state. May be null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "GetTransitionToTake", nullptr, nullptr, sizeof(SMStateInstance_Base_eventGetTransitionToTake_Parms), Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics
	{
		struct SMStateInstance_Base_eventIsStateMachine_Parms
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
	void Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventIsStateMachine_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventIsStateMachine_Parms), &Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Checks if this state is a state machine. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Checks if this state is a state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "IsStateMachine", nullptr, nullptr, sizeof(SMStateInstance_Base_eventIsStateMachine_Parms), Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when the immediate owning state machine blueprint is starting. If this is part of a reference\n\x09 * then it will be called when the reference starts. If this is for a state machine node\n\x09 * then it will only be called when the top level state machine starts.*/" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the immediate owning state machine blueprint is starting. If this is part of a reference\nthen it will be called when the reference starts. If this is for a state machine node\nthen it will only be called when the top level state machine starts." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnRootStateMachineStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when the immediate owning state machine blueprint is stopping. If this is part of a reference\n\x09 * then it will be called when the reference stops. If this is for a state machine node\n\x09 * then it will only be called when the top level state machine stops.*/" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the immediate owning state machine blueprint is stopping. If this is part of a reference\nthen it will be called when the reference stops. If this is for a state machine node\nthen it will only be called when the top level state machine stops." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnRootStateMachineStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when the state is started. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is started." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when the state is ending. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is ending." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventOnStateUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Called when the state is updated.\n\x09 *\n\x09 * @param DeltaSeconds Time delta in seconds from the last update.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called when the state is updated.\n\n@param DeltaSeconds Time delta in seconds from the last update." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "OnStateUpdate", nullptr, nullptr, sizeof(SMStateInstance_Base_eventOnStateUpdate_Parms), Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics
	{
		struct SMStateInstance_Base_eventSetActive_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSetActive_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSetActive_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Force set the active flag of this state. This call is replicated and can be called from the server or from a client that is not a simulated proxy.\n\x09 * @param bValue True activates the state, false deactivates the state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Force set the active flag of this state. This call is replicated and can be called from the server or from a client that is not a simulated proxy.\n@param bValue True activates the state, false deactivates the state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SetActive", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSetActive_Parms), Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics
	{
		struct SMStateInstance_Base_eventSwitchToLinkedState_Parms
		{
			USMStateInstance_Base* NextStateInstance;
			bool bRequireTransitionToPass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextStateInstance;
		static void NewProp_bRequireTransitionToPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireTransitionToPass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_NextStateInstance = { "NextStateInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_Base_eventSwitchToLinkedState_Parms, NextStateInstance), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedState_Parms*)Obj)->bRequireTransitionToPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass = { "bRequireTransitionToPass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMStateInstance_Base_eventSwitchToLinkedState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_NextStateInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_bRequireTransitionToPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n\x09 * @param NextStateInstance The state node instance to switch to.\n\x09 * @param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\x09 *\n\x09 * @return True if the active state was switched.\n\x09 */" },
		{ "CPP_Default_bRequireTransitionToPass", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Forcibly move to the next state providing this state is active and a transition is directly connecting the states.\n@param NextStateInstance The state node instance to switch to.\n@param bRequireTransitionToPass Will evaluate the transition and only switch states if it passes.\n\n@return True if the active state was switched." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance_Base, nullptr, "SwitchToLinkedState", nullptr, nullptr, sizeof(SMStateInstance_Base_eventSwitchToLinkedState_Parms), Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister()
	{
		return USMStateInstance_Base::StaticClass();
	}
	struct Z_Construct_UClass_USMStateInstance_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnStart_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnUpdate_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnEnd_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnInitialize_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnInitialize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnRootStateMachineStart_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnRootStateMachineStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnRootStateMachineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalGraphsOnRootStateMachineStop_MetaData[];
#endif
		static void NewProp_bEvalGraphsOnRootStateMachineStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalGraphsOnRootStateMachineStop;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRegisterWithContextMenu_MetaData[];
#endif
		static void NewProp_bRegisterWithContextMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRegisterWithContextMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideFromContextMenuIfRulesFail_MetaData[];
#endif
		static void NewProp_bHideFromContextMenuIfRulesFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideFromContextMenuIfRulesFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeEndStateColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeEndStateColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayNameWidget_MetaData[];
#endif
		static void NewProp_bDisplayNameWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayNameWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectionRules;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUpdate_MetaData[];
#endif
		static void NewProp_bAlwaysUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableTickTransitionEvaluation_MetaData[];
#endif
		static void NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableTickTransitionEvaluation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultToParallel_MetaData[];
#endif
		static void NewProp_bDefaultToParallel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultToParallel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowParallelReentry_MetaData[];
#endif
		static void NewProp_bAllowParallelReentry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowParallelReentry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStayActiveOnStateChange_MetaData[];
#endif
		static void NewProp_bStayActiveOnStateChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStayActiveOnStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalTransitionsOnStart_MetaData[];
#endif
		static void NewProp_bEvalTransitionsOnStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalTransitionsOnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromAnyState_MetaData[];
#endif
		static void NewProp_bExcludeFromAnyState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromAnyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateBeginEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateBeginEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateUpdateEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateUpdateEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateEndEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateEndEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateInstance_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateInstance_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateInstance_Base_EvaluateTransitions, "EvaluateTransitions" }, // 2716448595
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetIncomingTransitions, "GetIncomingTransitions" }, // 3924555540
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetNextStateByTransitionIndex, "GetNextStateByTransitionIndex" }, // 3882039236
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetOutgoingTransitions, "GetOutgoingTransitions" }, // 1697055068
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetStateInfo, "GetStateInfo" }, // 3461840850
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetTransitionByIndex, "GetTransitionByIndex" }, // 2609230699
		{ &Z_Construct_UFunction_USMStateInstance_Base_GetTransitionToTake, "GetTransitionToTake" }, // 3205035428
		{ &Z_Construct_UFunction_USMStateInstance_Base_IsStateMachine, "IsStateMachine" }, // 295450310
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStart, "OnRootStateMachineStart" }, // 232638769
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnRootStateMachineStop, "OnRootStateMachineStop" }, // 959657975
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateBegin, "OnStateBegin" }, // 2151997384
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateEnd, "OnStateEnd" }, // 3844466618
		{ &Z_Construct_UFunction_USMStateInstance_Base_OnStateUpdate, "OnStateUpdate" }, // 1485574522
		{ &Z_Construct_UFunction_USMStateInstance_Base_SetActive, "SetActive" }, // 1520915269
		{ &Z_Construct_UFunction_USMStateInstance_Base_SwitchToLinkedState, "SwitchToLinkedState" }, // 2331537351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The abstract base class for all state type nodes including state machine nodes and conduits.\n */" },
		{ "DisplayName", "State Class Base" },
		{ "HideCategories", "SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The abstract base class for all state type nodes including state machine nodes and conduits." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate on state start.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Start" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate on state start." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart = { "bEvalGraphsOnStart", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate on state update.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Update" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate on state update." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate = { "bEvalGraphsOnUpdate", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate on state end.\n\x09 */" },
		{ "DisplayName", "Auto Eval on End" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate on state end." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd = { "bEvalGraphsOnEnd", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate during the state's initialize sequence.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Initialize" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate during the state's initialize sequence." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize = { "bEvalGraphsOnInitialize", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate when the root state machine starts.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Root State Machine Start" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when the root state machine starts." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnRootStateMachineStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart = { "bEvalGraphsOnRootStateMachineStart", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData[] = {
		{ "Category", "Graph Properties" },
		{ "Comment", "/**\n\x09 * Should graph properties evaluate when the root state machine stops.\n\x09 */" },
		{ "DisplayName", "Auto Eval on Root State Machine Stop" },
		{ "EditCondition", "bAutoEvalExposedProperties" },
		{ "HideOnNode", "" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Should graph properties evaluate when the root state machine stops." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalGraphsOnRootStateMachineStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop = { "bEvalGraphsOnRootStateMachineStop", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Allows this node to be displayed in the graph context menu when placing nodes. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Allows this node to be displayed in the graph context menu when placing nodes." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bRegisterWithContextMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu = { "bRegisterWithContextMenu", nullptr, (EPropertyFlags)0x00200c0800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Restrict placement unless rules can be verified. Ex: If the rule says this can only be connected from a state node, then this won't show\n\x09 * in the context menu unless dragging from a state node. */" },
		{ "EditCondition", "bRegisterWithContextMenu" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Restrict placement unless rules can be verified. Ex: If the rule says this can only be connected from a state node, then this won't show\nin the context menu unless dragging from a state node." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bHideFromContextMenuIfRulesFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail = { "bHideFromContextMenuIfRulesFail", nullptr, (EPropertyFlags)0x00200c0800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData[] = {
		{ "Category", "Color" },
		{ "Comment", "/** The color this node should be when it is an end state. */" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "bUseCustomColors" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The color this node should be when it is an end state." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor = { "NodeEndStateColor", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, NodeEndStateColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Whether the name of this state should be visible on the node. It can still be changed in the details panel or by renaming the state graph. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Whether the name of this state should be visible on the node. It can still be changed in the details panel or by renaming the state graph." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDisplayNameWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget = { "bDisplayNameWidget", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of connections are allowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of connections are allowed. Default is all." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules = { "ConnectionRules", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, ConnectionRules), Z_Construct_UScriptStruct_FSMStateConnectionValidator, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Always update the state at least once before ending.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Always update the state at least once before ending." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bAlwaysUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate = { "bAlwaysUpdate", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Prevents conditional transitions for this state from being evaluated on Tick.\n\x09 * This is good to use if the transitions leading out of the state are event based\n\x09 * or if you are manually calling EvaluateTransitions from a state instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Prevents conditional transitions for this state from being evaluated on Tick.\nThis is good to use if the transitions leading out of the state are event based\nor if you are manually calling EvaluateTransitions from a state instance." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDisableTickTransitionEvaluation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation = { "bDisableTickTransitionEvaluation", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/** Sets all current and future transitions from this state to run in parallel. Conduit nodes are not supported. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Sets all current and future transitions from this state to run in parallel. Conduit nodes are not supported." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bDefaultToParallel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel = { "bDefaultToParallel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/** If this state can be reentered from a parallel state if this state is already active. This will not call On State End but will call On State Begin. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If this state can be reentered from a parallel state if this state is already active. This will not call On State End but will call On State Begin." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bAllowParallelReentry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry = { "bAllowParallelReentry", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/** If the state should remain active even after a transition is taken from this state. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "If the state should remain active even after a transition is taken from this state." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bStayActiveOnStateChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange = { "bStayActiveOnStateChange", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Allows transitions to be evaluated in the same tick as Start State.\n\x09 * Normally transitions are evaluated on the second tick.\n\x09 * This can be chained with other nodes that have this checked making it\n\x09   possible to evaluate multiple nodes and transitions in a single tick.\n\x09 \n\x09 * When using this consider performance implications and any potential\n\x09   infinite loops such as if you are using a self transition on this state.\n\n\x09 * Individual transitions can modify this behavior with bCanEvalWithStartState.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Allows transitions to be evaluated in the same tick as Start State.\nNormally transitions are evaluated on the second tick.\nThis can be chained with other nodes that have this checked making it\n          possible to evaluate multiple nodes and transitions in a single tick.\n\nWhen using this consider performance implications and any potential\n          infinite loops such as if you are using a self transition on this state.\n\nIndividual transitions can modify this behavior with bCanEvalWithStartState." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bEvalTransitionsOnStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart = { "bEvalTransitionsOnStart", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "/**\n\x09 * Prevents the `Any State` node from adding transitions to this node.\n\x09 * This can be useful for maintaining end states.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "NodeBaseOnly", "" },
		{ "ToolTip", "Prevents the `Any State` node from adding transitions to this node.\nThis can be useful for maintaining end states." },
	};
#endif
	void Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_SetBit(void* Obj)
	{
		((USMStateInstance_Base*)Obj)->bExcludeFromAnyState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState = { "bExcludeFromAnyState", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateInstance_Base), &Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called right before the state has started. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called right before the state has started." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent = { "OnStateBeginEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateBeginEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateBeginSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before the state has updated. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before the state has updated." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent = { "OnStateUpdateEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateUpdateEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateUpdateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before the state has ended. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before the state has ended." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent = { "OnStateEndEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateInstance_Base, OnStateEndEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateEndSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnInitialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalGraphsOnRootStateMachineStop,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bRegisterWithContextMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bHideFromContextMenuIfRulesFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_NodeEndStateColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisplayNameWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_ConnectionRules,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAlwaysUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDisableTickTransitionEvaluation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bDefaultToParallel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bAllowParallelReentry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bStayActiveOnStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bEvalTransitionsOnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_bExcludeFromAnyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateBeginEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateUpdateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateInstance_Base_Statics::NewProp_OnStateEndEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateInstance_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateInstance_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateInstance_Base_Statics::ClassParams = {
		&USMStateInstance_Base::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateInstance_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateInstance_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateInstance_Base, 2598801093);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateInstance_Base>()
	{
		return USMStateInstance_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateInstance_Base(Z_Construct_UClass_USMStateInstance_Base, &USMStateInstance_Base::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateInstance_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateInstance_Base);
	DEFINE_FUNCTION(USMStateInstance::execGetStateStackCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStateStackCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetAllStatesInStackOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateClass);
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateStackInstances);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStatesInStackOfClass(Z_Param_StateClass,Z_Param_Out_StateStackInstances,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStackOwnerInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStackOwnerInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStateInStackByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_StateClass);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStateInStackByClass(Z_Param_StateClass,Z_Param_bIncludeChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetStateInStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetStateInStack(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execGetAllStateStackInstances)
	{
		P_GET_TARRAY_REF(USMStateInstance_Base*,Z_Param_Out_StateStackInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStateStackInstances(Z_Param_Out_StateStackInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execOnStateShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateInstance::execOnStateInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateInitialized_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMStateInstance_OnStateInitialized = FName(TEXT("OnStateInitialized"));
	void USMStateInstance::OnStateInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_OnStateInitialized),NULL);
	}
	static FName NAME_USMStateInstance_OnStateShutdown = FName(TEXT("OnStateShutdown"));
	void USMStateInstance::OnStateShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateInstance_OnStateShutdown),NULL);
	}
	void USMStateInstance::StaticRegisterNativesUSMStateInstance()
	{
		UClass* Class = USMStateInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllStatesInStackOfClass", &USMStateInstance::execGetAllStatesInStackOfClass },
			{ "GetAllStateStackInstances", &USMStateInstance::execGetAllStateStackInstances },
			{ "GetStackOwnerInstance", &USMStateInstance::execGetStackOwnerInstance },
			{ "GetStateInStack", &USMStateInstance::execGetStateInStack },
			{ "GetStateInStackByClass", &USMStateInstance::execGetStateInStackByClass },
			{ "GetStateStackCount", &USMStateInstance::execGetStateStackCount },
			{ "OnStateInitialized", &USMStateInstance::execOnStateInitialized },
			{ "OnStateShutdown", &USMStateInstance::execOnStateShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics
	{
		struct SMStateInstance_eventGetAllStatesInStackOfClass_Parms
		{
			TSubclassOf<USMStateInstance>  StateClass;
			TArray<USMStateInstance_Base*> StateStackInstances;
			bool bIncludeChildren;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateStackInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateStackInstances;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStatesInStackOfClass_Parms, StateClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances_Inner = { "StateStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances = { "StateStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStatesInStackOfClass_Parms, StateStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMStateInstance_eventGetAllStatesInStackOfClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_eventGetAllStatesInStackOfClass_Parms), &Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_StateStackInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::NewProp_bIncludeChildren,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all states that match the given class.\n\x09 *\n\x09 * @param StateClass The state class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @param StateStackInstances [Out] State stack instances matching the given class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve all states that match the given class.\n\n@param StateClass The state class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@param StateStackInstances [Out] State stack instances matching the given class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetAllStatesInStackOfClass", nullptr, nullptr, sizeof(SMStateInstance_eventGetAllStatesInStackOfClass_Parms), Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics
	{
		struct SMStateInstance_eventGetAllStateStackInstances_Parms
		{
			TArray<USMStateInstance_Base*> StateStackInstances;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateStackInstances_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StateStackInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances_Inner = { "StateStackInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances = { "StateStackInstances", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetAllStateStackInstances_Parms, StateStackInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::NewProp_StateStackInstances,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve all state instances in the state stack.\n\x09 *\n\x09 * @param StateStackInstances [Out] State stack instances in their correct order.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve all state instances in the state stack.\n\n@param StateStackInstances [Out] State stack instances in their correct order." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetAllStateStackInstances", nullptr, nullptr, sizeof(SMStateInstance_eventGetAllStateStackInstances_Parms), Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics
	{
		struct SMStateInstance_eventGetStackOwnerInstance_Parms
		{
			USMStateInstance_Base* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStackOwnerInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the owning node instance of a state stack. If this is called from the main node instance\n\x09 * it will return itself.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the owning node instance of a state stack. If this is called from the main node instance\nit will return itself." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStackOwnerInstance", nullptr, nullptr, sizeof(SMStateInstance_eventGetStackOwnerInstance_Parms), Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics
	{
		struct SMStateInstance_eventGetStateInStack_Parms
		{
			int32 Index;
			USMStateInstance_Base* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStack_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStack_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve a state instance from within the state stack.\n\x09 * \n\x09 * @param Index the index of the array.\n\x09 * @return the state if the index is valid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve a state instance from within the state stack.\n\n@param Index the index of the array.\n@return the state if the index is valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateInStack", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateInStack_Parms), Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateInStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics
	{
		struct SMStateInstance_eventGetStateInStackByClass_Parms
		{
			TSubclassOf<USMStateInstance>  StateClass;
			bool bIncludeChildren;
			USMStateInstance_Base* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateClass;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_StateClass = { "StateClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStackByClass_Parms, StateClass), Z_Construct_UClass_USMStateInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((SMStateInstance_eventGetStateInStackByClass_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMStateInstance_eventGetStateInStackByClass_Parms), &Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateInStackByClass_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_StateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_bIncludeChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/**\n\x09 * Retrieve the first stack instance of a given class.\n\x09 *\n\x09 * @param StateClass The state class to search for.\n\x09 * @param bIncludeChildren If children of the given class can be included.\n\x09 * @return the first state that matches the class.\n\x09 */" },
		{ "CPP_Default_bIncludeChildren", "false" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Retrieve the first stack instance of a given class.\n\n@param StateClass The state class to search for.\n@param bIncludeChildren If children of the given class can be included.\n@return the first state that matches the class." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateInStackByClass", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateInStackByClass_Parms), Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics
	{
		struct SMStateInstance_eventGetStateStackCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateInstance_eventGetStateStackCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The total number of states in the state stack. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The total number of states in the state stack." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "GetStateStackCount", nullptr, nullptr, sizeof(SMStateInstance_eventGetStateStackCount_Parms), Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_GetStateStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_GetStateStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called before OnStateBegin and before transitions are initialized. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called before OnStateBegin and before transitions are initialized." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "OnStateInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_OnStateInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_OnStateInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after OnStateEnd and after transitions are shutdown. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "Called after OnStateEnd and after transitions are shutdown." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateInstance, nullptr, "OnStateShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateInstance_OnStateShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateInstance_OnStateShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateInstance_NoRegister()
	{
		return USMStateInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMStateInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateInstance_GetAllStatesInStackOfClass, "GetAllStatesInStackOfClass" }, // 1845263887
		{ &Z_Construct_UFunction_USMStateInstance_GetAllStateStackInstances, "GetAllStateStackInstances" }, // 622250570
		{ &Z_Construct_UFunction_USMStateInstance_GetStackOwnerInstance, "GetStackOwnerInstance" }, // 361184713
		{ &Z_Construct_UFunction_USMStateInstance_GetStateInStack, "GetStateInStack" }, // 508033016
		{ &Z_Construct_UFunction_USMStateInstance_GetStateInStackByClass, "GetStateInStackByClass" }, // 2554139061
		{ &Z_Construct_UFunction_USMStateInstance_GetStateStackCount, "GetStateStackCount" }, // 591636025
		{ &Z_Construct_UFunction_USMStateInstance_OnStateInitialized, "OnStateInitialized" }, // 1438449776
		{ &Z_Construct_UFunction_USMStateInstance_OnStateShutdown, "OnStateShutdown" }, // 1267201018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The base class for state nodes. This is where most execution logic should be defined.\n */" },
		{ "DisplayName", "State Class" },
		{ "HideCategories", "SMStateInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMStateInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMStateInstance.h" },
		{ "ToolTip", "The base class for state nodes. This is where most execution logic should be defined." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateInstance_Statics::ClassParams = {
		&USMStateInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateInstance, 3358766107);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateInstance>()
	{
		return USMStateInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateInstance(Z_Construct_UClass_USMStateInstance, &USMStateInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
