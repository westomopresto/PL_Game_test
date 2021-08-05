// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/Transitions/SMTransitionInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTransitionInstance() {}
// Cross Module References
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMTransitionInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionConnectionValidator();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics
	{
		struct _Script_SMSystem_eventOnTransitionEnteredSignature_Parms
		{
			USMTransitionInstance* TransitionInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::NewProp_TransitionInstance = { "TransitionInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SMSystem_eventOnTransitionEnteredSignature_Parms, TransitionInstance), Z_Construct_UClass_USMTransitionInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::NewProp_TransitionInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SMSystem, nullptr, "OnTransitionEnteredSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SMSystem_eventOnTransitionEnteredSignature_Parms), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetTransitionInfo)
	{
		P_GET_STRUCT_REF(FSMTransitionInfo,Z_Param_Out_Transition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTransitionInfo(Z_Param_Out_Transition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetNextStateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetNextStateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetPreviousStateInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMStateInstance_Base**)Z_Param__Result=P_THIS->GetPreviousStateInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execGetCanEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execSetCanEvaluate)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvaluate(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execOnTransitionEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTransitionEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMTransitionInstance::execCanEnterTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnterTransition_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMTransitionInstance_CanEnterTransition = FName(TEXT("CanEnterTransition"));
	bool USMTransitionInstance::CanEnterTransition() const
	{
		SMTransitionInstance_eventCanEnterTransition_Parms Parms;
		const_cast<USMTransitionInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_CanEnterTransition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USMTransitionInstance_OnTransitionEntered = FName(TEXT("OnTransitionEntered"));
	void USMTransitionInstance::OnTransitionEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionEntered),NULL);
	}
	static FName NAME_USMTransitionInstance_OnTransitionInitialized = FName(TEXT("OnTransitionInitialized"));
	void USMTransitionInstance::OnTransitionInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionInitialized),NULL);
	}
	static FName NAME_USMTransitionInstance_OnTransitionShutdown = FName(TEXT("OnTransitionShutdown"));
	void USMTransitionInstance::OnTransitionShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMTransitionInstance_OnTransitionShutdown),NULL);
	}
	void USMTransitionInstance::StaticRegisterNativesUSMTransitionInstance()
	{
		UClass* Class = USMTransitionInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEnterTransition", &USMTransitionInstance::execCanEnterTransition },
			{ "GetCanEvaluate", &USMTransitionInstance::execGetCanEvaluate },
			{ "GetNextStateInstance", &USMTransitionInstance::execGetNextStateInstance },
			{ "GetPreviousStateInstance", &USMTransitionInstance::execGetPreviousStateInstance },
			{ "GetTransitionInfo", &USMTransitionInstance::execGetTransitionInfo },
			{ "OnTransitionEntered", &USMTransitionInstance::execOnTransitionEntered },
			{ "OnTransitionInitialized", &USMTransitionInstance::execOnTransitionInitialized },
			{ "OnTransitionShutdown", &USMTransitionInstance::execOnTransitionShutdown },
			{ "SetCanEvaluate", &USMTransitionInstance::execSetCanEvaluate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventCanEnterTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventCanEnterTransition_Parms), &Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Conditional check to determine if the transition can be taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Conditional check to determine if the transition can be taken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "CanEnterTransition", nullptr, nullptr, sizeof(SMTransitionInstance_eventCanEnterTransition_Parms), Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics
	{
		struct SMTransitionInstance_eventGetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventGetCanEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventGetCanEvaluate_Parms), &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Check whether this transition is allowed to evaluate. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Check whether this transition is allowed to evaluate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetCanEvaluate", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics
	{
		struct SMTransitionInstance_eventGetNextStateInstance_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetNextStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The state this transition leads to. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The state this transition leads to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetNextStateInstance", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetNextStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics
	{
		struct SMTransitionInstance_eventGetPreviousStateInstance_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetPreviousStateInstance_Parms, ReturnValue), Z_Construct_UClass_USMStateInstance_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** The state this transition leaves from. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The state this transition leaves from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetPreviousStateInstance", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetPreviousStateInstance_Parms), Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics
	{
		struct SMTransitionInstance_eventGetTransitionInfo_Parms
		{
			FSMTransitionInfo Transition;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMTransitionInstance_eventGetTransitionInfo_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::NewProp_Transition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Return read only information about the owning transition. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Return read only information about the owning transition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "GetTransitionInfo", nullptr, nullptr, sizeof(SMTransitionInstance_eventGetTransitionInfo_Parms), Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when this transition has been evaluated and taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called when this transition has been evaluated and taken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after the state leading to this node is initialized but before OnStateBegin. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called after the state leading to this node is initialized but before OnStateBegin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "OnTransitionShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics
	{
		struct SMTransitionInstance_eventSetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMTransitionInstance_eventSetCanEvaluate_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMTransitionInstance_eventSetCanEvaluate_Parms), &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Sets whether this node is allowed to evaluate or not. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Sets whether this node is allowed to evaluate or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMTransitionInstance, nullptr, "SetCanEvaluate", nullptr, nullptr, sizeof(SMTransitionInstance_eventSetCanEvaluate_Parms), Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMTransitionInstance_NoRegister()
	{
		return USMTransitionInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMTransitionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionRules_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConnectionRules;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunParallel_MetaData[];
#endif
		static void NewProp_bRunParallel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunParallel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalIfNextStateActive_MetaData[];
#endif
		static void NewProp_bEvalIfNextStateActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalIfNextStateActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluateFromEvent_MetaData[];
#endif
		static void NewProp_bCanEvaluateFromEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluateFromEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvalWithStartState_MetaData[];
#endif
		static void NewProp_bCanEvalWithStartState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvalWithStartState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTransitionEnteredEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransitionEnteredEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTransitionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMNodeInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMTransitionInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMTransitionInstance_CanEnterTransition, "CanEnterTransition" }, // 2145105759
		{ &Z_Construct_UFunction_USMTransitionInstance_GetCanEvaluate, "GetCanEvaluate" }, // 1988844674
		{ &Z_Construct_UFunction_USMTransitionInstance_GetNextStateInstance, "GetNextStateInstance" }, // 3292845094
		{ &Z_Construct_UFunction_USMTransitionInstance_GetPreviousStateInstance, "GetPreviousStateInstance" }, // 43124926
		{ &Z_Construct_UFunction_USMTransitionInstance_GetTransitionInfo, "GetTransitionInfo" }, // 1672147715
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionEntered, "OnTransitionEntered" }, // 267874362
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionInitialized, "OnTransitionInitialized" }, // 754930859
		{ &Z_Construct_UFunction_USMTransitionInstance_OnTransitionShutdown, "OnTransitionShutdown" }, // 3354812069
		{ &Z_Construct_UFunction_USMTransitionInstance_SetCanEvaluate, "SetCanEvaluate" }, // 2033692504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The base class for transition connections.\n */" },
		{ "DisplayName", "Transition Class" },
		{ "HideCategories", "SMTransitionInstance SMNodeInstance" },
		{ "IncludePath", "Nodes/Transitions/SMTransitionInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "The base class for transition connections." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** Define what types of connections are allowed. Default is all. */" },
		{ "InstancedTemplate", "" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Define what types of connections are allowed. Default is all." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules = { "ConnectionRules", nullptr, (EPropertyFlags)0x0020080800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, ConnectionRules), Z_Construct_UScriptStruct_FSMTransitionConnectionValidator, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Lower number transitions will be evaluated first.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Lower number transitions will be evaluated first." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder = { "PriorityOrder", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, PriorityOrder), METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\n\x09 * This allows the possibility for multiple active states. Transitions from Conduit nodes are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition evaluates to true it will not prevent the next transition in the priority sequence from being evaluated.\nThis allows the possibility for multiple active states. Transitions from Conduit nodes are not supported." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bRunParallel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel = { "bRunParallel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData[] = {
		{ "Category", "Parallel States" },
		{ "Comment", "/**\n\x09 * Should the transition should still evaluate if already connecting to an active state.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Should the transition should still evaluate if already connecting to an active state." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bEvalIfNextStateActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive = { "bEvalIfNextStateActive", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * If this transition is allowed to evaluate conditionally.\n\x09 */" },
		{ "DisplayName", "Can Evaluate Conditionally" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition is allowed to evaluate conditionally." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/** If this transition can evaluate from autobinded events. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "If this transition can evaluate from autobinded events." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvaluateFromEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent = { "bCanEvaluateFromEvent", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData[] = {
		{ "Category", "Transition" },
		{ "Comment", "/**\n\x09 * Setting to false forces this transition to never evaluate on the same tick as Start State.\n\x09 * Only checked if this transition's from state has bEvalTransitionsOnStart set to true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Setting to false forces this transition to never evaluate on the same tick as Start State.\nOnly checked if this transition's from state has bEvalTransitionsOnStart set to true." },
	};
#endif
	void Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit(void* Obj)
	{
		((USMTransitionInstance*)Obj)->bCanEvalWithStartState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState = { "bCanEvalWithStartState", nullptr, (EPropertyFlags)0x0010040000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMTransitionInstance), &Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called when this transition has been entered from the previous state. */" },
		{ "ModuleRelativePath", "Public/Nodes/Transitions/SMTransitionInstance.h" },
		{ "ToolTip", "Called when this transition has been entered from the previous state." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent = { "OnTransitionEnteredEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTransitionInstance, OnTransitionEnteredEvent), Z_Construct_UDelegateFunction_SMSystem_OnTransitionEnteredSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_ConnectionRules,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_PriorityOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bRunParallel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bEvalIfNextStateActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvaluateFromEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_bCanEvalWithStartState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTransitionInstance_Statics::NewProp_OnTransitionEnteredEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTransitionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTransitionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMTransitionInstance_Statics::ClassParams = {
		&USMTransitionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTransitionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTransitionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMTransitionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMTransitionInstance, 2619906632);
	template<> SMSYSTEM_API UClass* StaticClass<USMTransitionInstance>()
	{
		return USMTransitionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMTransitionInstance(Z_Construct_UClass_USMTransitionInstance, &USMTransitionInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMTransitionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTransitionInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
