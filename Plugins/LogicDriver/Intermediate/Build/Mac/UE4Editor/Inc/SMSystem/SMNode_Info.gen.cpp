// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMSystem/Public/Nodes/SMNode_Info.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMNode_Info() {}
// Cross Module References
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo();
	UPackage* Z_Construct_UPackage__Script_SMSystem();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMInfo_Base();
	SMSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SMSYSTEM_API UClass* Z_Construct_UClass_USMNodeInstance_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSMStateInfo>() == std::is_polymorphic<FSMInfo_Base>(), "USTRUCT FSMStateInfo cannot be polymorphic unless super FSMInfo_Base is polymorphic");

class UScriptStruct* FSMStateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMStateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMStateInfo, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMStateInfo"), sizeof(FSMStateInfo), Get_Z_Construct_UScriptStruct_FSMStateInfo_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMStateInfo>()
{
	return FSMStateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMStateInfo(FSMStateInfo::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMStateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMStateInfo
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMStateInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMStateInfo")),new UScriptStruct::TCppStructOps<FSMStateInfo>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMStateInfo;
	struct Z_Construct_UScriptStruct_FSMStateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutgoingTransitions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutgoingTransitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutgoingTransitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEndState_MetaData[];
#endif
		static void NewProp_bIsEndState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEndState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "State Information" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMStateInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions_Inner = { "OutgoingTransitions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSMTransitionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** All of the transitions leading out of this state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "All of the transitions leading out of this state." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions = { "OutgoingTransitions", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMStateInfo, OutgoingTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** If this state is considered an end state. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "If this state is considered an end state." },
	};
#endif
	void Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState_SetBit(void* Obj)
	{
		((FSMStateInfo*)Obj)->bIsEndState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState = { "bIsEndState", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSMStateInfo), &Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMStateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_OutgoingTransitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMStateInfo_Statics::NewProp_bIsEndState,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMStateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMInfo_Base,
		&NewStructOps,
		"SMStateInfo",
		sizeof(FSMStateInfo),
		alignof(FSMStateInfo),
		Z_Construct_UScriptStruct_FSMStateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMStateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMStateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMStateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMStateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMStateInfo"), sizeof(FSMStateInfo), Get_Z_Construct_UScriptStruct_FSMStateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMStateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMStateInfo_Hash() { return 3430840368U; }

static_assert(std::is_polymorphic<FSMTransitionInfo>() == std::is_polymorphic<FSMInfo_Base>(), "USTRUCT FSMTransitionInfo cannot be polymorphic unless super FSMInfo_Base is polymorphic");

class UScriptStruct* FSMTransitionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMTransitionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMTransitionInfo, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMTransitionInfo"), sizeof(FSMTransitionInfo), Get_Z_Construct_UScriptStruct_FSMTransitionInfo_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMTransitionInfo>()
{
	return FSMTransitionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMTransitionInfo(FSMTransitionInfo::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMTransitionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionInfo
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMTransitionInfo")),new UScriptStruct::TCppStructOps<FSMTransitionInfo>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMTransitionInfo;
	struct Z_Construct_UScriptStruct_FSMTransitionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromStateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromStateGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToStateGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToStateGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Transition Information" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMTransitionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_FromStateGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Use TryGetStateInfo from the instance to retrieve this state information. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Use TryGetStateInfo from the instance to retrieve this state information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_FromStateGuid = { "FromStateGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionInfo, FromStateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_FromStateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_FromStateGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_ToStateGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Use TryGetStateInfo from the instance to retrieve this state information. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Use TryGetStateInfo from the instance to retrieve this state information." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_ToStateGuid = { "ToStateGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionInfo, ToStateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_ToStateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_ToStateGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** The assigned transition priority. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "The assigned transition priority." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMTransitionInfo, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_FromStateGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_ToStateGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::NewProp_Priority,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		Z_Construct_UScriptStruct_FSMInfo_Base,
		&NewStructOps,
		"SMTransitionInfo",
		sizeof(FSMTransitionInfo),
		alignof(FSMTransitionInfo),
		Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMTransitionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMTransitionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMTransitionInfo"), sizeof(FSMTransitionInfo), Get_Z_Construct_UScriptStruct_FSMTransitionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMTransitionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMTransitionInfo_Hash() { return 3706840106U; }
class UScriptStruct* FSMInfo_Base::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SMSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSMInfo_Base_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSMInfo_Base, Z_Construct_UPackage__Script_SMSystem(), TEXT("SMInfo_Base"), sizeof(FSMInfo_Base), Get_Z_Construct_UScriptStruct_FSMInfo_Base_Hash());
	}
	return Singleton;
}
template<> SMSYSTEM_API UScriptStruct* StaticStruct<FSMInfo_Base>()
{
	return FSMInfo_Base::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSMInfo_Base(FSMInfo_Base::StaticStruct, TEXT("/Script/SMSystem"), TEXT("SMInfo_Base"), false, nullptr, nullptr);
static struct FScriptStruct_SMSystem_StaticRegisterNativesFSMInfo_Base
{
	FScriptStruct_SMSystem_StaticRegisterNativesFSMInfo_Base()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SMInfo_Base")),new UScriptStruct::TCppStructOps<FSMInfo_Base>);
	}
} ScriptStruct_SMSystem_StaticRegisterNativesFSMInfo_Base;
	struct Z_Construct_UScriptStruct_FSMInfo_Base_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerNodeGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerNodeGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSMInfo_Base>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeName_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Friendly name of this node. Not guaranteed to be unique. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Friendly name of this node. Not guaranteed to be unique." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, NodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Unique identifier calculated from a node's position in an instance. The PathGuid of FSMNode_Base. Compatible with TryGetInfo. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Unique identifier calculated from a node's position in an instance. The PathGuid of FSMNode_Base. Compatible with TryGetInfo." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** The state machine's PathGuid owning this node. Compatible with TryGetStateInfo.*/" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "The state machine's PathGuid owning this node. Compatible with TryGetStateInfo." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerGuid = { "OwnerGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, OwnerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Guid assigned to this node during creation. May not be unique if this node is referenced multiple times. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Guid assigned to this node during creation. May not be unique if this node is referenced multiple times." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerNodeGuid_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** Guid assigned to the parent node during creation. May not be unique if this node is referenced multiple times. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "Guid assigned to the parent node during creation. May not be unique if this node is referenced multiple times." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerNodeGuid = { "OwnerNodeGuid", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, OwnerNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerNodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerNodeGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeInstance_MetaData[] = {
		{ "Category", "State Machines" },
		{ "Comment", "/** The node instance for this class. This will either be a default StateInstance or TransitionInstance, or a user defined one. */" },
		{ "ModuleRelativePath", "Public/Nodes/SMNode_Info.h" },
		{ "ToolTip", "The node instance for this class. This will either be a default StateInstance or TransitionInstance, or a user defined one." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeInstance = { "NodeInstance", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSMInfo_Base, NodeInstance), Z_Construct_UClass_USMNodeInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSMInfo_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_OwnerNodeGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSMInfo_Base_Statics::NewProp_NodeInstance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSMInfo_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SMSystem,
		nullptr,
		&NewStructOps,
		"SMInfo_Base",
		sizeof(FSMInfo_Base),
		alignof(FSMInfo_Base),
		Z_Construct_UScriptStruct_FSMInfo_Base_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSMInfo_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSMInfo_Base()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSMInfo_Base_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SMSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SMInfo_Base"), sizeof(FSMInfo_Base), Get_Z_Construct_UScriptStruct_FSMInfo_Base_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSMInfo_Base_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSMInfo_Base_Hash() { return 2723159458U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
