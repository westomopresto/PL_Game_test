// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/States/SMConduitInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMConduitInstance() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMConduitInstance();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateInstance_Base();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
// End Cross Module References
	DEFINE_FUNCTION(USMConduitInstance::execGetCanEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execSetCanEvaluate)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanEvaluate(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitShutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execOnConduitEntered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConduitEntered_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMConduitInstance::execCanEnterTransition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanEnterTransition_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_USMConduitInstance_CanEnterTransition = FName(TEXT("CanEnterTransition"));
	bool USMConduitInstance::CanEnterTransition() const
	{
		SMConduitInstance_eventCanEnterTransition_Parms Parms;
		const_cast<USMConduitInstance*>(this)->ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_CanEnterTransition),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USMConduitInstance_OnConduitEntered = FName(TEXT("OnConduitEntered"));
	void USMConduitInstance::OnConduitEntered()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitEntered),NULL);
	}
	static FName NAME_USMConduitInstance_OnConduitInitialized = FName(TEXT("OnConduitInitialized"));
	void USMConduitInstance::OnConduitInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitInitialized),NULL);
	}
	static FName NAME_USMConduitInstance_OnConduitShutdown = FName(TEXT("OnConduitShutdown"));
	void USMConduitInstance::OnConduitShutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMConduitInstance_OnConduitShutdown),NULL);
	}
	void USMConduitInstance::StaticRegisterNativesUSMConduitInstance()
	{
		UClass* Class = USMConduitInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanEnterTransition", &USMConduitInstance::execCanEnterTransition },
			{ "GetCanEvaluate", &USMConduitInstance::execGetCanEvaluate },
			{ "OnConduitEntered", &USMConduitInstance::execOnConduitEntered },
			{ "OnConduitInitialized", &USMConduitInstance::execOnConduitInitialized },
			{ "OnConduitShutdown", &USMConduitInstance::execOnConduitShutdown },
			{ "SetCanEvaluate", &USMConduitInstance::execSetCanEvaluate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventCanEnterTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventCanEnterTransition_Parms), &Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Is this conduit allowed to switch states. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Is this conduit allowed to switch states." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "CanEnterTransition", nullptr, nullptr, sizeof(SMConduitInstance_eventCanEnterTransition_Parms), Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_CanEnterTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_CanEnterTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics
	{
		struct SMConduitInstance_eventGetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventGetCanEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventGetCanEvaluate_Parms), &Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Check whether this node is allowed to evaluate. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Check whether this node is allowed to evaluate." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "GetCanEvaluate", nullptr, nullptr, sizeof(SMConduitInstance_eventGetCanEvaluate_Parms), Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called once this conduit has evaluated to true and has been taken. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called once this conduit has evaluated to true and has been taken." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitEntered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after the state leading to this node is initialized but before OnStateBegin. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called after the state leading to this node is initialized but before OnStateBegin." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Called after the state leading to this node has run OnStateEnd but before it has called its shutdown sequence." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "OnConduitShutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics
	{
		struct SMConduitInstance_eventSetCanEvaluate_Parms
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
	void Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SMConduitInstance_eventSetCanEvaluate_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SMConduitInstance_eventSetCanEvaluate_Parms), &Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|Node Instance" },
		{ "Comment", "/** Sets whether this node is allowed to evaluate or not. */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "Sets whether this node is allowed to evaluate or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMConduitInstance, nullptr, "SetCanEvaluate", nullptr, nullptr, sizeof(SMConduitInstance_eventSetCanEvaluate_Parms), Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMConduitInstance_NoRegister()
	{
		return USMConduitInstance::StaticClass();
	}
	struct Z_Construct_UClass_USMConduitInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEvalWithTransitions_MetaData[];
#endif
		static void NewProp_bEvalWithTransitions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEvalWithTransitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEvaluate_MetaData[];
#endif
		static void NewProp_bCanEvaluate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEvaluate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMConduitInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMStateInstance_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMConduitInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMConduitInstance_CanEnterTransition, "CanEnterTransition" }, // 1926118819
		{ &Z_Construct_UFunction_USMConduitInstance_GetCanEvaluate, "GetCanEvaluate" }, // 1688943973
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitEntered, "OnConduitEntered" }, // 179188466
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitInitialized, "OnConduitInitialized" }, // 2781490912
		{ &Z_Construct_UFunction_USMConduitInstance_OnConduitShutdown, "OnConduitShutdown" }, // 2451072780
		{ &Z_Construct_UFunction_USMConduitInstance_SetCanEvaluate, "SetCanEvaluate" }, // 3140368793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "State Machine" },
		{ "Comment", "/**\n * The base class for conduit nodes.\n */" },
		{ "DisplayName", "Conduit Class" },
		{ "HideCategories", "SMConduitInstance SMStateInstance_Base SMNodeInstance" },
		{ "IncludePath", "Nodes/States/SMConduitInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "The base class for conduit nodes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData[] = {
		{ "Category", "Conduit" },
		{ "Comment", "/**\n\x09 * This conduit will be evaluated with inbound and outbound transitions.\n\x09 * If any transition fails the entire transition fails. In that case the\n\x09 * state leading to this conduit will not take this transition.\n\x09 *\n\x09 * This makes the behavior similar to AnimGraph conduits.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "This conduit will be evaluated with inbound and outbound transitions.\nIf any transition fails the entire transition fails. In that case the\nstate leading to this conduit will not take this transition.\n\nThis makes the behavior similar to AnimGraph conduits." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bEvalWithTransitions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions = { "bEvalWithTransitions", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData[] = {
		{ "Category", "Conduit" },
		{ "Comment", "/**\n\x09 * If this conduit is allowed to evaluate.\n\x09 */" },
		{ "DisplayName", "Can Evaluate" },
		{ "ModuleRelativePath", "Public/Nodes/States/SMConduitInstance.h" },
		{ "ToolTip", "If this conduit is allowed to evaluate." },
	};
#endif
	void Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_SetBit(void* Obj)
	{
		((USMConduitInstance*)Obj)->bCanEvaluate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate = { "bCanEvaluate", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMConduitInstance), &Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMConduitInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bEvalWithTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMConduitInstance_Statics::NewProp_bCanEvaluate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMConduitInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMConduitInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMConduitInstance_Statics::ClassParams = {
		&USMConduitInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMConduitInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMConduitInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMConduitInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMConduitInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMConduitInstance, 4246499789);
	template<> SMSYSTEM_API UClass* StaticClass<USMConduitInstance>()
	{
		return USMConduitInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMConduitInstance(Z_Construct_UClass_USMConduitInstance, &USMConduitInstance::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMConduitInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMConduitInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
