// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMStateMachineComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMStateMachineComponent() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineComponent_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMNetworkedTransaction();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature();
	SMSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SMSYSTEM_API UEnum* Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineInterface_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMStateMachineComponent::execREP_ShuttingDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->REP_ShuttingDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execREP_NetworkedTransactions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->REP_NetworkedTransactions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execREP_OnInstanceLoaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->REP_OnInstanceLoaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_ProcessTransaction)
	{
		P_GET_TARRAY(FSMNetworkedTransaction,Z_Param_Transactions);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_ProcessTransaction_Validate(Z_Param_Transactions))
		{
			RPC_ValidateFailed(TEXT("SERVER_ProcessTransaction_Validate"));
			return;
		}
		P_THIS->SERVER_ProcessTransaction_Implementation(Z_Param_Transactions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_Shutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Shutdown_Validate())
		{
			RPC_ValidateFailed(TEXT("SERVER_Shutdown_Validate"));
			return;
		}
		P_THIS->SERVER_Shutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_Stop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Stop_Validate())
		{
			RPC_ValidateFailed(TEXT("SERVER_Stop_Validate"));
			return;
		}
		P_THIS->SERVER_Stop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_Update)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Update_Validate(Z_Param_DeltaTime))
		{
			RPC_ValidateFailed(TEXT("SERVER_Update_Validate"));
			return;
		}
		P_THIS->SERVER_Update_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_Start)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Start_Validate())
		{
			RPC_ValidateFailed(TEXT("SERVER_Start_Validate"));
			return;
		}
		P_THIS->SERVER_Start_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execSERVER_Initialize)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SERVER_Initialize_Validate(Z_Param_Context))
		{
			RPC_ValidateFailed(TEXT("SERVER_Initialize_Validate"));
			return;
		}
		P_THIS->SERVER_Initialize_Implementation(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInternal_OnStateMachineStateChanged)
	{
		P_GET_OBJECT(USMInstance,Z_Param_Instance);
		P_GET_STRUCT(FSMStateInfo,Z_Param_ToState);
		P_GET_STRUCT(FSMStateInfo,Z_Param_FromState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnStateMachineStateChanged(Z_Param_Instance,Z_Param_ToState,Z_Param_FromState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInternal_OnStateMachineTransitionTaken)
	{
		P_GET_OBJECT(USMInstance,Z_Param_Instance);
		P_GET_STRUCT(FSMTransitionInfo,Z_Param_Transition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnStateMachineTransitionTaken(Z_Param_Instance,Z_Param_Transition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInternal_OnStateMachineStopped)
	{
		P_GET_OBJECT(USMInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnStateMachineStopped(Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInternal_OnStateMachineUpdated)
	{
		P_GET_OBJECT(USMInstance,Z_Param_Instance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnStateMachineUpdated(Z_Param_Instance,Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInternal_OnStateMachineStarted)
	{
		P_GET_OBJECT(USMInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Internal_OnStateMachineStarted(Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=P_THIS->GetInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMStateMachineComponent::execInitialize)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Context);
		P_NATIVE_END;
	}
	static FName NAME_USMStateMachineComponent_OnPostInitialize = FName(TEXT("OnPostInitialize"));
	void USMStateMachineComponent::OnPostInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_OnPostInitialize),NULL);
	}
	static FName NAME_USMStateMachineComponent_SERVER_Initialize = FName(TEXT("SERVER_Initialize"));
	void USMStateMachineComponent::SERVER_Initialize(UObject* Context)
	{
		SMStateMachineComponent_eventSERVER_Initialize_Parms Parms;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_Initialize),&Parms);
	}
	static FName NAME_USMStateMachineComponent_SERVER_ProcessTransaction = FName(TEXT("SERVER_ProcessTransaction"));
	void USMStateMachineComponent::SERVER_ProcessTransaction(TArray<FSMNetworkedTransaction> const& Transactions)
	{
		SMStateMachineComponent_eventSERVER_ProcessTransaction_Parms Parms;
		Parms.Transactions=Transactions;
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_ProcessTransaction),&Parms);
	}
	static FName NAME_USMStateMachineComponent_SERVER_Shutdown = FName(TEXT("SERVER_Shutdown"));
	void USMStateMachineComponent::SERVER_Shutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_Shutdown),NULL);
	}
	static FName NAME_USMStateMachineComponent_SERVER_Start = FName(TEXT("SERVER_Start"));
	void USMStateMachineComponent::SERVER_Start()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_Start),NULL);
	}
	static FName NAME_USMStateMachineComponent_SERVER_Stop = FName(TEXT("SERVER_Stop"));
	void USMStateMachineComponent::SERVER_Stop()
	{
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_Stop),NULL);
	}
	static FName NAME_USMStateMachineComponent_SERVER_Update = FName(TEXT("SERVER_Update"));
	void USMStateMachineComponent::SERVER_Update(float DeltaTime)
	{
		SMStateMachineComponent_eventSERVER_Update_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_USMStateMachineComponent_SERVER_Update),&Parms);
	}
	void USMStateMachineComponent::StaticRegisterNativesUSMStateMachineComponent()
	{
		UClass* Class = USMStateMachineComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &USMStateMachineComponent::execGetInstance },
			{ "Initialize", &USMStateMachineComponent::execInitialize },
			{ "Internal_OnStateMachineStarted", &USMStateMachineComponent::execInternal_OnStateMachineStarted },
			{ "Internal_OnStateMachineStateChanged", &USMStateMachineComponent::execInternal_OnStateMachineStateChanged },
			{ "Internal_OnStateMachineStopped", &USMStateMachineComponent::execInternal_OnStateMachineStopped },
			{ "Internal_OnStateMachineTransitionTaken", &USMStateMachineComponent::execInternal_OnStateMachineTransitionTaken },
			{ "Internal_OnStateMachineUpdated", &USMStateMachineComponent::execInternal_OnStateMachineUpdated },
			{ "REP_NetworkedTransactions", &USMStateMachineComponent::execREP_NetworkedTransactions },
			{ "REP_OnInstanceLoaded", &USMStateMachineComponent::execREP_OnInstanceLoaded },
			{ "REP_ShuttingDown", &USMStateMachineComponent::execREP_ShuttingDown },
			{ "SERVER_Initialize", &USMStateMachineComponent::execSERVER_Initialize },
			{ "SERVER_ProcessTransaction", &USMStateMachineComponent::execSERVER_ProcessTransaction },
			{ "SERVER_Shutdown", &USMStateMachineComponent::execSERVER_Shutdown },
			{ "SERVER_Start", &USMStateMachineComponent::execSERVER_Start },
			{ "SERVER_Stop", &USMStateMachineComponent::execSERVER_Stop },
			{ "SERVER_Update", &USMStateMachineComponent::execSERVER_Update },
			{ "Shutdown", &USMStateMachineComponent::execShutdown },
			{ "Start", &USMStateMachineComponent::execStart },
			{ "Stop", &USMStateMachineComponent::execStop },
			{ "Update", &USMStateMachineComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics
	{
		struct SMStateMachineComponent_eventGetInstance_Parms
		{
			USMInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Retrieve the real state machine instance this component wraps. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Retrieve the real state machine instance this component wraps." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "GetInstance", nullptr, nullptr, sizeof(SMStateMachineComponent_eventGetInstance_Parms), Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics
	{
		struct SMStateMachineComponent_eventInitialize_Parms
		{
			UObject* Context;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInitialize_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/**\n\x09 * Initialize bound functions and load in the context. \n\x09 * This cannot occur during automatic Component Activation when working with Listen servers and playing in the editor. The game\n\x09 * will incorrectly report as Stand Alone.\n\x09 */" },
		{ "CPP_Default_Context", "None" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Initialize bound functions and load in the context.\nThis cannot occur during automatic Component Activation when working with Listen servers and playing in the editor. The game\nwill incorrectly report as Stand Alone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Initialize", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInitialize_Parms), Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics
	{
		struct SMStateMachineComponent_eventInternal_OnStateMachineStarted_Parms
		{
			USMInstance* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineStarted_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Internal_OnStateMachineStarted", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInternal_OnStateMachineStarted_Parms), Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics
	{
		struct SMStateMachineComponent_eventInternal_OnStateMachineStateChanged_Parms
		{
			USMInstance* Instance;
			FSMStateInfo ToState;
			FSMStateInfo FromState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineStateChanged_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_ToState = { "ToState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineStateChanged_Parms, ToState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_FromState = { "FromState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineStateChanged_Parms, FromState), Z_Construct_UScriptStruct_FSMStateInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_ToState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::NewProp_FromState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Internal_OnStateMachineStateChanged", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInternal_OnStateMachineStateChanged_Parms), Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics
	{
		struct SMStateMachineComponent_eventInternal_OnStateMachineStopped_Parms
		{
			USMInstance* Instance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineStopped_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Internal_OnStateMachineStopped", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInternal_OnStateMachineStopped_Parms), Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics
	{
		struct SMStateMachineComponent_eventInternal_OnStateMachineTransitionTaken_Parms
		{
			USMInstance* Instance;
			FSMTransitionInfo Transition;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineTransitionTaken_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::NewProp_Transition = { "Transition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineTransitionTaken_Parms, Transition), Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::NewProp_Transition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Internal_OnStateMachineTransitionTaken", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInternal_OnStateMachineTransitionTaken_Parms), Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics
	{
		struct SMStateMachineComponent_eventInternal_OnStateMachineUpdated_Parms
		{
			USMInstance* Instance;
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineUpdated_Parms, Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventInternal_OnStateMachineUpdated_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Internal_OnStateMachineUpdated", nullptr, nullptr, sizeof(SMStateMachineComponent_eventInternal_OnStateMachineUpdated_Parms), Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called after the state machine has initialized either locally or by replication. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called after the state machine has initialized either locally or by replication." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "OnPostInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When the server has indicated a change. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When the server has indicated a change." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "REP_NetworkedTransactions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When the StateMachineInstance is loaded from the server. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When the StateMachineInstance is loaded from the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "REP_OnInstanceLoaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When the server has signaled this instance should shut down. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When the server has signaled this instance should shut down." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "REP_ShuttingDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventSERVER_Initialize_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signal the server to initialize state machine. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Signal the server to initialize state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_Initialize", nullptr, nullptr, sizeof(SMStateMachineComponent_eventSERVER_Initialize_Parms), Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transactions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions_Inner = { "Transactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMNetworkedTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions = { "Transactions", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventSERVER_ProcessTransaction_Parms, Transactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::NewProp_Transactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signal the server of changing transitions. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Signal the server of changing transitions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_ProcessTransaction", nullptr, nullptr, sizeof(SMStateMachineComponent_eventSERVER_ProcessTransaction_Parms), Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signal the server to shutdown the state machine.*/" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Signal the server to shutdown the state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signal the server to start the state machine. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Signal the server to start the state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Signal the server to end the state machine.*/" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Signal the server to end the state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventSERVER_Update_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Update the server state machine. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Update the server state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "SERVER_Update", nullptr, nullptr, sizeof(SMStateMachineComponent_eventSERVER_Update_Parms), Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/**\n\x09 * Shutdown this instance. Calls Stop. Must call initialize again before use.\n\x09 * If the goal is to restart the state machine later call Stop instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Shutdown this instance. Calls Stop. Must call initialize again before use.\nIf the goal is to restart the state machine later call Stop instead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Start the root state machine. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Start the root state machine." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Start", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** This will complete the state machine's current state and force the machine to end regardless of if the state is an end state. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "This will complete the state machine's current state and force the machine to end regardless of if the state is an end state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMStateMachineComponent_Update_Statics
	{
		struct SMStateMachineComponent_eventUpdate_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMStateMachineComponent_eventUpdate_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Manual way of updating the root state machine if tick is disabled. Not used by default and for custom update implementations. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Manual way of updating the root state machine if tick is disabled. Not used by default and for custom update implementations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMStateMachineComponent, nullptr, "Update", nullptr, nullptr, sizeof(SMStateMachineComponent_eventUpdate_Parms), Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMStateMachineComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMStateMachineComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMStateMachineComponent_NoRegister()
	{
		return USMStateMachineComponent::StaticClass();
	}
	struct Z_Construct_UClass_USMStateMachineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineInitializedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineInitializedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStartedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStartedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineUpdatedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineUpdatedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStoppedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStoppedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineTransitionTakenEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineTransitionTakenEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateMachineStateChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateMachineStateChangedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachineClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkTickConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkTickConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkTransitionConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkTransitionConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkStateConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkStateConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIncludeSimulatedProxies_MetaData[];
#endif
		static void NewProp_bIncludeSimulatedProxies_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeSimulatedProxies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTakeTransitionsFromServerOnly_MetaData[];
#endif
		static void NewProp_bTakeTransitionsFromServerOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTakeTransitionsFromServerOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionResetTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransitionResetTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateStatesOnLoad_MetaData[];
#endif
		static void NewProp_bReplicateStatesOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateStatesOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardTransitionsBeforeInitialize_MetaData[];
#endif
		static void NewProp_bDiscardTransitionsBeforeInitialize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiscardTransitionsBeforeInitialize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeToWaitForTransitionUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTimeToWaitForTransitionUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitializeOnBeginPlay_MetaData[];
#endif
		static void NewProp_bInitializeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializeOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartOnBeginPlay_MetaData[];
#endif
		static void NewProp_bStartOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLetInstanceManageTick_MetaData[];
#endif
		static void NewProp_bLetInstanceManageTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLetInstanceManageTick;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_R_NetworkedTransactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_NetworkedTransactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_R_NetworkedTransactions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingTransactions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingTransactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingTransactions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_R_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTick_MetaData[];
#endif
		static void NewProp_bOverrideTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanEverTick_MetaData[];
#endif
		static void NewProp_bCanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideTickInterval_MetaData[];
#endif
		static void NewProp_bOverrideTickInterval_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideTickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_R_bShuttingDown_MetaData[];
#endif
		static void NewProp_R_bShuttingDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_R_bShuttingDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanInstanceNetworkTick_MetaData[];
#endif
		static void NewProp_bCanInstanceNetworkTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanInstanceNetworkTick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMStateMachineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMStateMachineComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMStateMachineComponent_GetInstance, "GetInstance" }, // 3501936353
		{ &Z_Construct_UFunction_USMStateMachineComponent_Initialize, "Initialize" }, // 192108050
		{ &Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStarted, "Internal_OnStateMachineStarted" }, // 3548723733
		{ &Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStateChanged, "Internal_OnStateMachineStateChanged" }, // 3262707749
		{ &Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineStopped, "Internal_OnStateMachineStopped" }, // 3357602156
		{ &Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineTransitionTaken, "Internal_OnStateMachineTransitionTaken" }, // 292907793
		{ &Z_Construct_UFunction_USMStateMachineComponent_Internal_OnStateMachineUpdated, "Internal_OnStateMachineUpdated" }, // 2480803443
		{ &Z_Construct_UFunction_USMStateMachineComponent_OnPostInitialize, "OnPostInitialize" }, // 1465623082
		{ &Z_Construct_UFunction_USMStateMachineComponent_REP_NetworkedTransactions, "REP_NetworkedTransactions" }, // 1637681661
		{ &Z_Construct_UFunction_USMStateMachineComponent_REP_OnInstanceLoaded, "REP_OnInstanceLoaded" }, // 1201387336
		{ &Z_Construct_UFunction_USMStateMachineComponent_REP_ShuttingDown, "REP_ShuttingDown" }, // 1282399833
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_Initialize, "SERVER_Initialize" }, // 3580163966
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_ProcessTransaction, "SERVER_ProcessTransaction" }, // 3168502480
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_Shutdown, "SERVER_Shutdown" }, // 1525466199
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_Start, "SERVER_Start" }, // 2947864496
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_Stop, "SERVER_Stop" }, // 1866275015
		{ &Z_Construct_UFunction_USMStateMachineComponent_SERVER_Update, "SERVER_Update" }, // 1727895369
		{ &Z_Construct_UFunction_USMStateMachineComponent_Shutdown, "Shutdown" }, // 3726810355
		{ &Z_Construct_UFunction_USMStateMachineComponent_Start, "Start" }, // 3138014545
		{ &Z_Construct_UFunction_USMStateMachineComponent_Stop, "Stop" }, // 1764106812
		{ &Z_Construct_UFunction_USMStateMachineComponent_Update, "Update" }, // 2240120041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "StateMachines" },
		{ "Comment", "/**\n * Actor Component wrapper for a State Machine Instance. Supports Replication. Will default state machine context to the owning actor of this component.\n * Call Start() when ready.\n */" },
		{ "DisplayName", "State Machine Component" },
		{ "IncludePath", "SMStateMachineComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Actor Component wrapper for a State Machine Instance. Supports Replication. Will default state machine context to the owning actor of this component.\nCall Start() when ready." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineInitializedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called when the state machine is first initialized. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called when the state machine is first initialized." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineInitializedEvent = { "OnStateMachineInitializedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineInitializedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineInitializedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineInitializedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineInitializedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStartedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called right before the state machine is started. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called right before the state machine is started." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStartedEvent = { "OnStateMachineStartedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineStartedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStartedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStartedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called right before the state machine is updated. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called right before the state machine is updated." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineUpdatedEvent = { "OnStateMachineUpdatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineUpdatedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineUpdatedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineUpdatedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStoppedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called right after the state machine has ended. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called right after the state machine has ended." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStoppedEvent = { "OnStateMachineStoppedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineStoppedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStoppedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStoppedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStoppedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called when a transition has evaluated to true and is being taken. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called when a transition has evaluated to true and is being taken." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineTransitionTakenEvent = { "OnStateMachineTransitionTakenEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineTransitionTakenEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineTransitionTakenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineTransitionTakenEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData[] = {
		{ "Category", "Logic Driver|State Machine Components" },
		{ "Comment", "/** Called when a state machine has switched states. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Called when a state machine has switched states." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStateChangedEvent = { "OnStateMachineStateChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, OnStateMachineStateChangedEvent), Z_Construct_UDelegateFunction_SMSystem_OnStateMachineStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStateChangedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_StateMachineClass_MetaData[] = {
		{ "Category", "State Machine Components" },
		{ "Comment", "/** The state machine class to use for this instance. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The state machine class to use for this instance." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0015000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_StateMachineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_StateMachineClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTickConfiguration_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** Determine which domain to tick. The state machine must allow ticking for this to take effect. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Determine which domain to tick. The state machine must allow ticking for this to take effect." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTickConfiguration = { "NetworkTickConfiguration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, NetworkTickConfiguration), Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTickConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTickConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTransitionConfiguration_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * The domain to evaluate transitions. Requires Replication and a networked environment.\n\x09 * Client - The client is allowed to evaluate and send transitions to the server. The server will only process and broadcast transitions from the client.\n\x09 * Server - Only the server will evaluate transitions which it will then send to the client.\n\x09 * ClientAndServer - Both the server and client may evaluate transitions. It is completely up to your implementation if any transition logic should run on the server or client.\n\x09 *\n\x09 * All optional execution nodes such as OnTransitionEntered will always execute across all domains and simulated proxies.\n\x09 *\n\x09 * Using bIncludeSimulatedProxies with client driven transitions on an actor without a player controller will not work. Server RPC calls can only be made with a player controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The domain to evaluate transitions. Requires Replication and a networked environment.\nClient - The client is allowed to evaluate and send transitions to the server. The server will only process and broadcast transitions from the client.\nServer - Only the server will evaluate transitions which it will then send to the client.\nClientAndServer - Both the server and client may evaluate transitions. It is completely up to your implementation if any transition logic should run on the server or client.\n\nAll optional execution nodes such as OnTransitionEntered will always execute across all domains and simulated proxies.\n\nUsing bIncludeSimulatedProxies with client driven transitions on an actor without a player controller will not work. Server RPC calls can only be made with a player controller." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTransitionConfiguration = { "NetworkTransitionConfiguration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, NetworkTransitionConfiguration), Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTransitionConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTransitionConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkStateConfiguration_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * The domain which state logic can be executed on. Requires Replication and a networked environment.\n\x09 * Client - Only the client will execute state logic.\n\x09 * Server - Only the server will execute state logic.\n\x09 * ClientAndServer - Both the server and client will execute state logic.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The domain which state logic can be executed on. Requires Replication and a networked environment.\nClient - Only the client will execute state logic.\nServer - Only the server will execute state logic.\nClientAndServer - Both the server and client will execute state logic." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkStateConfiguration = { "NetworkStateConfiguration", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, NetworkStateConfiguration), Z_Construct_UEnum_SMSystem_ESMNetworkConfigurationType, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkStateConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkStateConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09 * Include simulated proxies when processing the client domain. The default client behavior only includes autonomous proxies\n\x09 * such as actors possessed by a player controller. Client driven transitions will not work without a player controller.\n\x09 */" },
		{ "EditCondition", "bReplicates" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Include simulated proxies when processing the client domain. The default client behavior only includes autonomous proxies\nsuch as actors possessed by a player controller. Client driven transitions will not work without a player controller." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bIncludeSimulatedProxies = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies = { "bIncludeSimulatedProxies", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * When true, if the client determines a transition can be entered it will only notify the server and not take the transition until the server updates the client. \n\x09 * When false, the client will take the transition immediately.\n\x09 */" },
		{ "EditCondition", "bReplicates" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When true, if the client determines a transition can be entered it will only notify the server and not take the transition until the server updates the client.\nWhen false, the client will take the transition immediately." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bTakeTransitionsFromServerOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly = { "bTakeTransitionsFromServerOnly", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TransitionResetTimeSeconds_MetaData[] = {
		{ "Category", "Network" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * All transitions taken are timestamped and stored in a replicated array allowing all clients to take the same transitions.\n\x09 * Once this reset time is reached all expired transitions are removed from the array.\n\x09 */" },
		{ "EditCondition", "bReplicates" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "All transitions taken are timestamped and stored in a replicated array allowing all clients to take the same transitions.\nOnce this reset time is reached all expired transitions are removed from the array." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TransitionResetTimeSeconds = { "TransitionResetTimeSeconds", nullptr, (EPropertyFlags)0x0010040000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, TransitionResetTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TransitionResetTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TransitionResetTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09 * When the instance is initially replicated this will load current active states instead of the initial state. It is likely these match.\n\x09 */" },
		{ "EditCondition", "bReplicates" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When the instance is initially replicated this will load current active states instead of the initial state. It is likely these match." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bReplicateStatesOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad = { "bReplicateStatesOnLoad", nullptr, (EPropertyFlags)0x0010040000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09 * When true, if the client receives transitions before the state machine has initialized it will discard them.\n\x09 * When false, it will store the transitions and execute them once initialized by replication.\n\x09 */" },
		{ "EditCondition", "bReplicates" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "When true, if the client receives transitions before the state machine has initialized it will discard them.\nWhen false, it will store the transitions and execute them once initialized by replication." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bDiscardTransitionsBeforeInitialize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize = { "bDiscardTransitionsBeforeInitialize", nullptr, (EPropertyFlags)0x0010040000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_MaxTimeToWaitForTransitionUpdate_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * The maximum time in seconds to wait for the server to send an update to take the transition.\n\x09 * Once this is hit the local instance will evaluate the transition again and notify the server.\n\x09 * Set to 0 to run indefinitely.\n\x09 */" },
		{ "EditCondition", "bTakeTransitionsFromServerOnly" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The maximum time in seconds to wait for the server to send an update to take the transition.\nOnce this is hit the local instance will evaluate the transition again and notify the server.\nSet to 0 to run indefinitely." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_MaxTimeToWaitForTransitionUpdate = { "MaxTimeToWaitForTransitionUpdate", nullptr, (EPropertyFlags)0x0010040000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, MaxTimeToWaitForTransitionUpdate), METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_MaxTimeToWaitForTransitionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_MaxTimeToWaitForTransitionUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay_MetaData[] = {
		{ "Category", "State Machine Components" },
		{ "Comment", "/** Automatically initialize the state machine when the component begins play. This will set State Machine Context to the owning actor of this component. */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Automatically initialize the state machine when the component begins play. This will set State Machine Context to the owning actor of this component." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bInitializeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay = { "bInitializeOnBeginPlay", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay_MetaData[] = {
		{ "Category", "State Machine Components" },
		{ "Comment", "/** Automatically start the state machine when the component begins play. */" },
		{ "EditCondition", "bInitializeOnBeginPlay" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Automatically start the state machine when the component begins play." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bStartOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay = { "bStartOnBeginPlay", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick_MetaData[] = {
		{ "Category", "State Machine Components" },
		{ "Comment", "/** The default behavior is to let the actor component tick the state machine when it ticks. This legacy option allows the instance to register as a tickable object instead. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The default behavior is to let the actor component tick the state machine when it ticks. This legacy option allows the instance to register as a tickable object instead." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bLetInstanceManageTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick = { "bLetInstanceManageTick", nullptr, (EPropertyFlags)0x0010040000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions_Inner = { "R_NetworkedTransactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMNetworkedTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions_MetaData[] = {
		{ "Comment", "/** Transactions which the server has replicated. Generally transitions. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Transactions which the server has replicated. Generally transitions." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions = { "R_NetworkedTransactions", "REP_NetworkedTransactions", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, R_NetworkedTransactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions_Inner = { "PendingTransactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMNetworkedTransaction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions_MetaData[] = {
		{ "Comment", "/** Transitions which couldn't be processed yet. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Transitions which couldn't be processed yet." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions = { "PendingTransactions", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, PendingTransactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_Instance_MetaData[] = {
		{ "Comment", "/** The actual state machine instance. */" },
		{ "DisplayName", "Instance" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The actual state machine instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_Instance = { "R_Instance", "REP_OnInstanceLoaded", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, R_Instance), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_InstanceTemplate_MetaData[] = {
		{ "Category", "State Machine Components" },
		{ "Comment", "/** The template to use when initializing the state machine. Only valid within the CDO. */" },
		{ "DisplayName", "Template" },
		{ "DisplayThumbnail", "FALSE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "The template to use when initializing the state machine. Only valid within the CDO." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_InstanceTemplate = { "InstanceTemplate", nullptr, (EPropertyFlags)0x00220800002b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, InstanceTemplate), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_InstanceTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_InstanceTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * If false the default setting will be used. When replicated this component may still perform some level of override depending on the NetworkTickConfiguration.\n\x09 *\n\x09 * @deprecated Use bCanEverTick on the instance template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "If false the default setting will be used. When replicated this component may still perform some level of override depending on the NetworkTickConfiguration.\n\n@deprecated Use bCanEverTick on the instance template instead." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bOverrideTick_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick = { "bOverrideTick", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick_MetaData[] = {
		{ "Comment", "/**\n\x09 * Allow the machine to tick. Overrides default State Machine blueprint configuration.\n\x09 *\n\x09 * @deprecated Use bCanEverTick on the instance template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Allow the machine to tick. Overrides default State Machine blueprint configuration.\n\n@deprecated Use bCanEverTick on the instance template instead." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bCanEverTick_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick = { "bCanEverTick", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval_MetaData[] = {
		{ "Comment", "/**\n\x09 * If false the default setting will be used.\n\x09 *\n\x09 * @deprecated Use TickInterval on the instance template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "If false the default setting will be used.\n\n@deprecated Use TickInterval on the instance template instead." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bOverrideTickInterval_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval = { "bOverrideTickInterval", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TickInterval_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected.\n\x09 * Overrides default state machine blueprint configuration.\n\x09 *\n\x09 * @deprecated Use TickInterval on the instance template instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Time in seconds between native ticks. This mostly affects the \"Update\" rate of the state machine. Overloaded Ticks won't be affected.\nOverrides default state machine blueprint configuration.\n\n@deprecated Use TickInterval on the instance template instead." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TickInterval = { "TickInterval", nullptr, (EPropertyFlags)0x0020080020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMStateMachineComponent, TickInterval_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TickInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown_MetaData[] = {
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->R_bShuttingDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown = { "R_bShuttingDown", "REP_ShuttingDown", (EPropertyFlags)0x0020080100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick_MetaData[] = {
		{ "Comment", "/** Set from the template and adjusted for the network configuration. */" },
		{ "ModuleRelativePath", "Public/SMStateMachineComponent.h" },
		{ "ToolTip", "Set from the template and adjusted for the network configuration." },
	};
#endif
	void Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick_SetBit(void* Obj)
	{
		((USMStateMachineComponent*)Obj)->bCanInstanceNetworkTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick = { "bCanInstanceNetworkTick", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USMStateMachineComponent), &Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMStateMachineComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineInitializedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStartedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineUpdatedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStoppedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineTransitionTakenEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_OnStateMachineStateChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_StateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTickConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkTransitionConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_NetworkStateConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bIncludeSimulatedProxies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bTakeTransitionsFromServerOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TransitionResetTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bReplicateStatesOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bDiscardTransitionsBeforeInitialize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_MaxTimeToWaitForTransitionUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bInitializeOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bStartOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bLetInstanceManageTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_NetworkedTransactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_PendingTransactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_InstanceTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bOverrideTickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_TickInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_R_bShuttingDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMStateMachineComponent_Statics::NewProp_bCanInstanceNetworkTick,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMStateMachineComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USMStateMachineInterface_NoRegister, (int32)VTABLE_OFFSET(USMStateMachineComponent, ISMStateMachineInterface), false },
			{ Z_Construct_UClass_USMStateMachineNetworkedInterface_NoRegister, (int32)VTABLE_OFFSET(USMStateMachineComponent, ISMStateMachineNetworkedInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMStateMachineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMStateMachineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMStateMachineComponent_Statics::ClassParams = {
		&USMStateMachineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USMStateMachineComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USMStateMachineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMStateMachineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMStateMachineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMStateMachineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMStateMachineComponent, 394876460);
	template<> SMSYSTEM_API UClass* StaticClass<USMStateMachineComponent>()
	{
		return USMStateMachineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMStateMachineComponent(Z_Construct_UClass_USMStateMachineComponent, &USMStateMachineComponent::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMStateMachineComponent"), false, nullptr, nullptr, nullptr);

	void USMStateMachineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_R_NetworkedTransactions(TEXT("R_NetworkedTransactions"));
		static const FName Name_R_Instance(TEXT("R_Instance"));
		static const FName Name_R_bShuttingDown(TEXT("R_bShuttingDown"));

		const bool bIsValid = true
			&& Name_R_NetworkedTransactions == ClassReps[(int32)ENetFields_Private::R_NetworkedTransactions].Property->GetFName()
			&& Name_R_Instance == ClassReps[(int32)ENetFields_Private::R_Instance].Property->GetFName()
			&& Name_R_bShuttingDown == ClassReps[(int32)ENetFields_Private::R_bShuttingDown].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USMStateMachineComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMStateMachineComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USMStateMachineComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
