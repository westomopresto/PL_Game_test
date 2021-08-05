// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedRuntime/Public/Properties/SMExtendedPropertyHelpers.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMExtendedPropertyHelpers() {}
// Cross Module References
	SMEXTENDEDRUNTIME_API UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers_NoRegister();
	SMEXTENDEDRUNTIME_API UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SMExtendedRuntime();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
// End Cross Module References
	DEFINE_FUNCTION(USMExtendedGraphPropertyHelpers::execBreakTextGraphProperty)
	{
		P_GET_STRUCT_REF(FSMTextGraphProperty,Z_Param_Out_GraphProperty);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USMExtendedGraphPropertyHelpers::BreakTextGraphProperty(Z_Param_Out_GraphProperty,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	void USMExtendedGraphPropertyHelpers::StaticRegisterNativesUSMExtendedGraphPropertyHelpers()
	{
		UClass* Class = USMExtendedGraphPropertyHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTextGraphProperty", &USMExtendedGraphPropertyHelpers::execBreakTextGraphProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics
	{
		struct SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms
		{
			FSMTextGraphProperty GraphProperty;
			FText Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphProperty;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty = { "GraphProperty", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms, GraphProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty, METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_GraphProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Graph Property" },
		{ "ModuleRelativePath", "Public/Properties/SMExtendedPropertyHelpers.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USMExtendedGraphPropertyHelpers, nullptr, "BreakTextGraphProperty", nullptr, nullptr, sizeof(SMExtendedGraphPropertyHelpers_eventBreakTextGraphProperty_Parms), Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers_NoRegister()
	{
		return USMExtendedGraphPropertyHelpers::StaticClass();
	}
	struct Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USMExtendedGraphPropertyHelpers_BreakTextGraphProperty, "BreakTextGraphProperty" }, // 2402680147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/SMExtendedPropertyHelpers.h" },
		{ "ModuleRelativePath", "Public/Properties/SMExtendedPropertyHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMExtendedGraphPropertyHelpers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::ClassParams = {
		&USMExtendedGraphPropertyHelpers::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMExtendedGraphPropertyHelpers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMExtendedGraphPropertyHelpers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMExtendedGraphPropertyHelpers, 657045522);
	template<> SMEXTENDEDRUNTIME_API UClass* StaticClass<USMExtendedGraphPropertyHelpers>()
	{
		return USMExtendedGraphPropertyHelpers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMExtendedGraphPropertyHelpers(Z_Construct_UClass_USMExtendedGraphPropertyHelpers, &USMExtendedGraphPropertyHelpers::StaticClass, TEXT("/Script/SMExtendedRuntime"), TEXT("USMExtendedGraphPropertyHelpers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMExtendedGraphPropertyHelpers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
