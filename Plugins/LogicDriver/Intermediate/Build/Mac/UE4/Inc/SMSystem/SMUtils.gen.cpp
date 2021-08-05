// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/SMUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMUtils() {}
// Cross Module References
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintUtils_NoRegister();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMBlueprintUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USMBlueprintUtils::execCreateStateMachineInstanceFromTemplate)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_GET_OBJECT(USMInstance,Z_Param_Template);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::CreateStateMachineInstanceFromTemplate(Z_Param_StateMachineClass,Z_Param_Context,Z_Param_Template);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USMBlueprintUtils::execCreateStateMachineInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_StateMachineClass);
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USMInstance**)Z_Param__Result=USMBlueprintUtils::CreateStateMachineInstance(Z_Param_StateMachineClass,Z_Param_Context);
		P_NATIVE_END;
	}
	void USMBlueprintUtils::StaticRegisterNativesUSMBlueprintUtils()
	{
		UClass* Class = USMBlueprintUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateStateMachineInstance", &USMBlueprintUtils::execCreateStateMachineInstance },
			{ "CreateStateMachineInstanceFromTemplate", &USMBlueprintUtils::execCreateStateMachineInstanceFromTemplate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics
	{
		struct SMBlueprintUtils_eventCreateStateMachineInstance_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			USMInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstance_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstance_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstance_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_StateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities" },
		{ "Comment", "/** Create a new state machine instance initialized with the given context. */" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create a new state machine instance initialized with the given context." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "CreateStateMachineInstance", nullptr, nullptr, sizeof(SMBlueprintUtils_eventCreateStateMachineInstance_Parms), Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics
	{
		struct SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms
		{
			TSubclassOf<USMInstance>  StateMachineClass;
			UObject* Context;
			USMInstance* Template;
			USMInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateMachineClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_StateMachineClass = { "StateMachineClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, StateMachineClass), Z_Construct_UClass_USMInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, Template), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms, ReturnValue), Z_Construct_UClass_USMInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_StateMachineClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Logic Driver|State Machine Utilities" },
		{ "Comment", "/** Create a new state machine instance from a template and initialize with the given context. */" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "Create a new state machine instance from a template and initialize with the given context." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMBlueprintUtils, nullptr, "CreateStateMachineInstanceFromTemplate", nullptr, nullptr, sizeof(SMBlueprintUtils_eventCreateStateMachineInstanceFromTemplate_Parms), Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMBlueprintUtils_NoRegister()
	{
		return USMBlueprintUtils::StaticClass();
	}
	struct Z_Construct_UClass_USMBlueprintUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMBlueprintUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMBlueprintUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstance, "CreateStateMachineInstance" }, // 415502129
		{ &Z_Construct_UFunction_USMBlueprintUtils_CreateStateMachineInstanceFromTemplate, "CreateStateMachineInstanceFromTemplate" }, // 3344421054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * General Blueprint helpers for creating state machines.\n */" },
		{ "IncludePath", "SMUtils.h" },
		{ "ModuleRelativePath", "Public/SMUtils.h" },
		{ "ToolTip", "General Blueprint helpers for creating state machines." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMBlueprintUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMBlueprintUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMBlueprintUtils_Statics::ClassParams = {
		&USMBlueprintUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMBlueprintUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMBlueprintUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMBlueprintUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMBlueprintUtils, 1769404262);
	template<> SMSYSTEM_API UClass* StaticClass<USMBlueprintUtils>()
	{
		return USMBlueprintUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMBlueprintUtils(Z_Construct_UClass_USMBlueprintUtils, &USMBlueprintUtils::StaticClass, TEXT("/Script/SMSystem"), TEXT("USMBlueprintUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMBlueprintUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
