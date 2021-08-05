// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Properties/SMGraphProperty_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMGraphProperty_Base() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMExposedFunctionHandler();
// End Cross Module References

static_assert(std::is_polymorphic<FSMGraphProperty>() == std::is_polymorphic<FSMGraphProperty_Base>(), "USTRUCT FSMGraphProperty cannot be polymorphic unless super FSMGraphProperty_Base is polymorphic");

class UScriptStruct* FSMGraphProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty"), sizeof(FSMGraphProperty), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty>()
{
	return FSMGraphProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphProperty(FSMGraphProperty::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMGraphProperty"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphProperty")),new UScriptStruct::TCppStructOps<FSMGraphProperty>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty;
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * EDITOR: Graph properties which represent a variable exposed on a node. Contains additional properties for configuration and compilation.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "EDITOR: Graph properties which represent a variable exposed on a node. Contains additional properties for configuration and compilation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo = { "WidgetInfo", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty, WidgetInfo), Z_Construct_UScriptStruct_FSMTextDisplayWidgetInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Statics::NewProp_WidgetInfo,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base,
		&NewStructOps,
		"SMGraphProperty",
		sizeof(FSMGraphProperty),
		alignof(FSMGraphProperty),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphProperty"), sizeof(FSMGraphProperty), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Hash() { return 2370423637U; }

static_assert(std::is_polymorphic<FSMGraphProperty_Base>() == std::is_polymorphic<FSMGraphProperty_Base_Runtime>(), "USTRUCT FSMGraphProperty_Base cannot be polymorphic unless super FSMGraphProperty_Base_Runtime is polymorphic");

class UScriptStruct* FSMGraphProperty_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Base"), sizeof(FSMGraphProperty_Base), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Base>()
{
	return FSMGraphProperty_Base::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphProperty_Base(FSMGraphProperty_Base::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMGraphProperty_Base"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphProperty_Base")),new UScriptStruct::TCppStructOps<FSMGraphProperty_Base>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base;
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MemberReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInArray_MetaData[];
#endif
		static void NewProp_bIsInArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInArray;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RealDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphSchemaClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphSchemaClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphModuleClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GraphModuleClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedGraphClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CachedGraphClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSchemaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CachedSchemaClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidUnmodified_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuidUnmodified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TemplateGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GuidIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * EDITOR: The base struct for graph properties exposed on a node. Contains additional properties for configuration and compilation.\n * Any graph property types should inherit from this.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "EDITOR: The base struct for graph properties exposed on a node. Contains additional properties for configuration and compilation.\nAny graph property types should inherit from this." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Base>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, VariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, VariableType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference = { "MemberReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, MemberReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_SetBit(void* Obj)
	{
		((FSMGraphProperty_Base*)Obj)->bIsInArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray = { "bIsInArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMGraphProperty_Base), &Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData[] = {
		{ "Comment", "/** Set when loaded in a graph node. */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Set when loaded in a graph node." },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName = { "RealDisplayName", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, RealDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData[] = {
		{ "Comment", "/** Set when loaded in a graph node in the event this is stored within an array. */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Set when loaded in a graph node in the event this is stored within an array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex = { "ArrayIndex", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, ArrayIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName = { "GraphClassName", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName = { "GraphSchemaClassName", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphSchemaClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName = { "GraphModuleClassName", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GraphModuleClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass = { "CachedGraphClass", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, CachedGraphClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass = { "CachedSchemaClass", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, CachedSchemaClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData[] = {
		{ "Comment", "/** The guid without the template. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The guid without the template." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified = { "GuidUnmodified", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GuidUnmodified), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData[] = {
		{ "Comment", "/** The guid of the template this belongs to. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The guid of the template this belongs to." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid = { "TemplateGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, TemplateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex = { "GuidIndex", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base, GuidIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_VariableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_MemberReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_bIsInArray,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_RealDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_ArrayIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphSchemaClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GraphModuleClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedGraphClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_CachedSchemaClass,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidUnmodified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_TemplateGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::NewProp_GuidIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime,
		&NewStructOps,
		"SMGraphProperty_Base",
		sizeof(FSMGraphProperty_Base),
		alignof(FSMGraphProperty_Base),
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphProperty_Base"), sizeof(FSMGraphProperty_Base), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Hash() { return 1849426249U; }

static_assert(std::is_polymorphic<FSMGraphProperty_Runtime>() == std::is_polymorphic<FSMGraphProperty_Base_Runtime>(), "USTRUCT FSMGraphProperty_Runtime cannot be polymorphic unless super FSMGraphProperty_Base_Runtime is polymorphic");

class UScriptStruct* FSMGraphProperty_Runtime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Runtime"), sizeof(FSMGraphProperty_Runtime), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Runtime>()
{
	return FSMGraphProperty_Runtime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphProperty_Runtime(FSMGraphProperty_Runtime::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMGraphProperty_Runtime"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Runtime
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Runtime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphProperty_Runtime")),new UScriptStruct::TCppStructOps<FSMGraphProperty_Runtime>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Runtime;
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Graph properties which represent a variable exposed on a node. Only for run-time use.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "Graph properties which represent a variable exposed on a node. Only for run-time use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Runtime>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime,
		&NewStructOps,
		"SMGraphProperty_Runtime",
		sizeof(FSMGraphProperty_Runtime),
		alignof(FSMGraphProperty_Runtime),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Runtime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphProperty_Runtime"), sizeof(FSMGraphProperty_Runtime), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Runtime_Hash() { return 1952298967U; }
class UScriptStruct* FSMGraphProperty_Base_Runtime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMGraphProperty_Base_Runtime"), sizeof(FSMGraphProperty_Base_Runtime), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMGraphProperty_Base_Runtime>()
{
	return FSMGraphProperty_Base_Runtime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMGraphProperty_Base_Runtime(FSMGraphProperty_Base_Runtime::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMGraphProperty_Base_Runtime"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base_Runtime
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base_Runtime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMGraphProperty_Base_Runtime")),new UScriptStruct::TCppStructOps<FSMGraphProperty_Base_Runtime>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMGraphProperty_Base_Runtime;
	struct Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphEvaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GraphEvaluator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The base graph properties containing the bare essentials for run-time.\n * Any run-time graph property types should inherit from this.\n */" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The base graph properties containing the bare essentials for run-time.\nAny run-time graph property types should inherit from this." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMGraphProperty_Base_Runtime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator = { "GraphEvaluator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, GraphEvaluator), Z_Construct_UScriptStruct_FSMExposedFunctionHandler, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData[] = {
		{ "Comment", "/** The graph property owner. If this struct is defined within a node class and instanced\n\x09 * to a state machine then the guid of class CDO is the owner. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Properties/SMGraphProperty_Base.h" },
		{ "ToolTip", "The graph property owner. If this struct is defined within a node class and instanced\nto a state machine then the guid of class CDO is the owner." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid = { "OwnerGuid", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMGraphProperty_Base_Runtime, OwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_GraphEvaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::NewProp_OwnerGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMGraphProperty_Base_Runtime",
		sizeof(FSMGraphProperty_Base_Runtime),
		alignof(FSMGraphProperty_Base_Runtime),
		Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMGraphProperty_Base_Runtime"), sizeof(FSMGraphProperty_Base_Runtime), Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMGraphProperty_Base_Runtime_Hash() { return 2015575315U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
