// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMExtendedEditor/Private/Graph/SMTextPropertyGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMTextPropertyGraph() {}
// Cross Module References
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraph_NoRegister();
	SMEXTENDEDEDITOR_API UClass* Z_Construct_UClass_USMTextPropertyGraph();
	SMSYSTEMEDITOR_API UClass* Z_Construct_UClass_USMPropertyGraph();
	UPackage* Z_Construct_UPackage__Script_SMExtendedEditor();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FormatText_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void USMTextPropertyGraph::StaticRegisterNativesUSMTextPropertyGraph()
	{
	}
	UClass* Z_Construct_UClass_USMTextPropertyGraph_NoRegister()
	{
		return USMTextPropertyGraph::StaticClass();
	}
	struct Z_Construct_UClass_USMTextPropertyGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FormatTextNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FormatTextNode;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredProperties_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StoredProperties_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StoredProperties;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StoredFunctions_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StoredFunctions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoredFunctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StoredFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTextBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RichTextBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainTextBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PlainTextBody;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMTextPropertyGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USMPropertyGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_SMExtendedEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/SMTextPropertyGraph.h" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData[] = {
		{ "Comment", "/** The node used to format the text before the result node. */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "The node used to format the text before the result node." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode = { "FormatTextNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, FormatTextNode), Z_Construct_UClass_UK2Node_FormatText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_ValueProp = { "StoredProperties", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_Key_KeyProp = { "StoredProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData[] = {
		{ "Comment", "/** Variable name to variable guid. */" },
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
		{ "ToolTip", "Variable name to variable guid." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties = { "StoredProperties", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, StoredProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_ValueProp = { "StoredFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_Key_KeyProp = { "StoredFunctions_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions = { "StoredFunctions", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, StoredFunctions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody = { "RichTextBody", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, RichTextBody), METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/SMTextPropertyGraph.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody = { "PlainTextBody", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USMTextPropertyGraph, PlainTextBody), METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_FormatTextNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_StoredFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_RichTextBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USMTextPropertyGraph_Statics::NewProp_PlainTextBody,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMTextPropertyGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMTextPropertyGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USMTextPropertyGraph_Statics::ClassParams = {
		&USMTextPropertyGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMTextPropertyGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMTextPropertyGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USMTextPropertyGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USMTextPropertyGraph, 1138361481);
	template<> SMEXTENDEDEDITOR_API UClass* StaticClass<USMTextPropertyGraph>()
	{
		return USMTextPropertyGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USMTextPropertyGraph(Z_Construct_UClass_USMTextPropertyGraph, &USMTextPropertyGraph::StaticClass, TEXT("/Script/SMExtendedEditor"), TEXT("USMTextPropertyGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMTextPropertyGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
