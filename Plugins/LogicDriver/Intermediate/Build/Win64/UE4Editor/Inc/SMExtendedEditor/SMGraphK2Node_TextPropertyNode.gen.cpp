// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphK2Node_TextPropertyNode() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime();
	SMEXTENDEDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextGraphProperty();
// End Cross Module References
	void USMGraphK2Node_TextPropertyNode::StaticRegisterNativesUSMGraphK2Node_TextPropertyNode()
	{
	}
	UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_NoRegister()
	{
		return USMGraphK2Node_TextPropertyNode::StaticClass();
	}
	struct Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeTextProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeTextProperty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProperty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextProperty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMGraphK2Node_PropertyNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty = { "RuntimeTextProperty", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_TextPropertyNode, RuntimeTextProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty_Runtime, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData[] = {
		{ "Category", "Graph Property" },
		{ "ModuleRelativePath", "Private/Graph/Nodes/PropertyNodes/SMGraphK2Node_TextPropertyNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty = { "TextProperty", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMGraphK2Node_TextPropertyNode, TextProperty), Z_Construct_UScriptStruct_FSMTextGraphProperty, METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_RuntimeTextProperty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::NewProp_TextProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMGraphK2Node_TextPropertyNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::ClassParams = {
		&USMGraphK2Node_TextPropertyNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMGraphK2Node_TextPropertyNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMGraphK2Node_TextPropertyNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMGraphK2Node_TextPropertyNode, 238025526);
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMGraphK2Node_TextPropertyNode>()
	{
		return USMGraphK2Node_TextPropertyNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMGraphK2Node_TextPropertyNode(Z_Construct_UClass_USMGraphK2Node_TextPropertyNode, &USMGraphK2Node_TextPropertyNode::StaticClass, TEXT("/Script/SMExtendedEditor"), TEXT("USMGraphK2Node_TextPropertyNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMGraphK2Node_TextPropertyNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
