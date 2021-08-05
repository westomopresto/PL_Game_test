// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMInstance;
struct FSMStateInfo;
struct FSMTransitionInfo;
struct FGuid;
class USMStateMachineInstance;
class USMTransitionInstance;
class USMStateInstance_Base;
class UObject;
class USMStateMachineComponent;
#ifdef SMSYSTEM_SMInstance_generated_h
#error "SMInstance.generated.h already included, missing '#pragma once' in SMInstance.h"
#endif
#define SMSYSTEM_SMInstance_generated_h

#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSMDebugStateMachine_Statics; \
	SMSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SMSYSTEM_API UScriptStruct* StaticStruct<struct FSMDebugStateMachine>();

#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_19_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms \
{ \
	USMInstance* Instance; \
	FSMStateInfo NewState; \
	FSMStateInfo PreviousState; \
}; \
static inline void FOnStateMachineStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStateChangedSignature, USMInstance* Instance, FSMStateInfo NewState, FSMStateInfo PreviousState) \
{ \
	_Script_SMSystem_eventOnStateMachineStateChangedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.NewState=NewState; \
	Parms.PreviousState=PreviousState; \
	OnStateMachineStateChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_18_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms \
{ \
	USMInstance* Instance; \
	FSMTransitionInfo Transition; \
}; \
static inline void FOnStateMachineTransitionTakenSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineTransitionTakenSignature, USMInstance* Instance, FSMTransitionInfo Transition) \
{ \
	_Script_SMSystem_eventOnStateMachineTransitionTakenSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.Transition=Transition; \
	OnStateMachineTransitionTakenSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_17_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStoppedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineStoppedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStoppedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineStoppedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineStoppedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_16_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms \
{ \
	USMInstance* Instance; \
	float DeltaSeconds; \
}; \
static inline void FOnStateMachineUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineUpdatedSignature, USMInstance* Instance, float DeltaSeconds) \
{ \
	_Script_SMSystem_eventOnStateMachineUpdatedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	Parms.DeltaSeconds=DeltaSeconds; \
	OnStateMachineUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_15_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineStartedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineStartedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineStartedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineStartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_14_DELEGATE \
struct _Script_SMSystem_eventOnStateMachineInitializedSignature_Parms \
{ \
	USMInstance* Instance; \
}; \
static inline void FOnStateMachineInitializedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateMachineInitializedSignature, USMInstance* Instance) \
{ \
	_Script_SMSystem_eventOnStateMachineInitializedSignature_Parms Parms; \
	Parms.Instance=Instance; \
	OnStateMachineInitializedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_SPARSE_DATA
#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_RPC_WRAPPERS \
	virtual void OnStateMachineStateChanged_Implementation(FSMStateInfo const& ToState, FSMStateInfo const& FromState); \
	virtual void OnStateMachineTransitionTaken_Implementation(FSMTransitionInfo const& Transition); \
	virtual void OnStateMachineStop_Implementation(); \
	virtual void OnStateMachineUpdate_Implementation(float DeltaSeconds); \
	virtual void OnStateMachineStart_Implementation(); \
	virtual void OnStateMachineInitialized_Implementation(); \
	virtual void Tick_Implementation(float DeltaTime); \
 \
	DECLARE_FUNCTION(execREP_StartChanged); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execSetStopOnEndState); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execCanAutoManageTime); \
	DECLARE_FUNCTION(execSetAutoManageTime); \
	DECLARE_FUNCTION(execSetTickInterval); \
	DECLARE_FUNCTION(execSetCanTickWhenPaused); \
	DECLARE_FUNCTION(execCanTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetRootStateMachineInstance); \
	DECLARE_FUNCTION(execGetTransitionInstanceByGuid); \
	DECLARE_FUNCTION(execGetStateInstanceByGuid); \
	DECLARE_FUNCTION(execGetReferencedInstanceByGuid); \
	DECLARE_FUNCTION(execTryGetTransitionInfo); \
	DECLARE_FUNCTION(execTryGetStateInfo); \
	DECLARE_FUNCTION(execGetAllReferencedInstances); \
	DECLARE_FUNCTION(execGetAllActiveStateInstances); \
	DECLARE_FUNCTION(execGetSingleActiveStateInstance); \
	DECLARE_FUNCTION(execGetActiveStateInstance); \
	DECLARE_FUNCTION(execGetAllActiveStateGuids); \
	DECLARE_FUNCTION(execGetSingleActiveStateGuid); \
	DECLARE_FUNCTION(execGetAllCurrentStateGuids); \
	DECLARE_FUNCTION(execTryGetNestedActiveState); \
	DECLARE_FUNCTION(execGetNestedActiveStateGuid); \
	DECLARE_FUNCTION(execGetActiveStateGuid); \
	DECLARE_FUNCTION(execGetNestedActiveStateName); \
	DECLARE_FUNCTION(execGetActiveStateName); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetContext); \
	DECLARE_FUNCTION(execIsTickableWhenPaused); \
	DECLARE_FUNCTION(execIsTickable); \
	DECLARE_FUNCTION(execTick);


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execREP_StartChanged); \
	DECLARE_FUNCTION(execInternal_EventCleanup); \
	DECLARE_FUNCTION(execInternal_Update); \
	DECLARE_FUNCTION(execOnStateMachineStateChanged); \
	DECLARE_FUNCTION(execOnStateMachineTransitionTaken); \
	DECLARE_FUNCTION(execOnStateMachineStop); \
	DECLARE_FUNCTION(execOnStateMachineUpdate); \
	DECLARE_FUNCTION(execOnStateMachineStart); \
	DECLARE_FUNCTION(execOnStateMachineInitialized); \
	DECLARE_FUNCTION(execSetStateMachineClass); \
	DECLARE_FUNCTION(execGetStateMachineClass); \
	DECLARE_FUNCTION(execGetMasterReferenceOwner); \
	DECLARE_FUNCTION(execGetReferenceOwner); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execHasStarted); \
	DECLARE_FUNCTION(execGetAllTransitionInstances); \
	DECLARE_FUNCTION(execGetAllStateInstances); \
	DECLARE_FUNCTION(execSetContext); \
	DECLARE_FUNCTION(execIsInEndState); \
	DECLARE_FUNCTION(execSetStopOnEndState); \
	DECLARE_FUNCTION(execGetTickInterval); \
	DECLARE_FUNCTION(execCanAutoManageTime); \
	DECLARE_FUNCTION(execSetAutoManageTime); \
	DECLARE_FUNCTION(execSetTickInterval); \
	DECLARE_FUNCTION(execSetCanTickWhenPaused); \
	DECLARE_FUNCTION(execCanTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetTickOnManualUpdate); \
	DECLARE_FUNCTION(execSetCanEverTick); \
	DECLARE_FUNCTION(execCanEverTick); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetRootStateMachineInstance); \
	DECLARE_FUNCTION(execGetTransitionInstanceByGuid); \
	DECLARE_FUNCTION(execGetStateInstanceByGuid); \
	DECLARE_FUNCTION(execGetReferencedInstanceByGuid); \
	DECLARE_FUNCTION(execTryGetTransitionInfo); \
	DECLARE_FUNCTION(execTryGetStateInfo); \
	DECLARE_FUNCTION(execGetAllReferencedInstances); \
	DECLARE_FUNCTION(execGetAllActiveStateInstances); \
	DECLARE_FUNCTION(execGetSingleActiveStateInstance); \
	DECLARE_FUNCTION(execGetActiveStateInstance); \
	DECLARE_FUNCTION(execGetAllActiveStateGuids); \
	DECLARE_FUNCTION(execGetSingleActiveStateGuid); \
	DECLARE_FUNCTION(execGetAllCurrentStateGuids); \
	DECLARE_FUNCTION(execTryGetNestedActiveState); \
	DECLARE_FUNCTION(execGetNestedActiveStateGuid); \
	DECLARE_FUNCTION(execGetActiveStateGuid); \
	DECLARE_FUNCTION(execGetNestedActiveStateName); \
	DECLARE_FUNCTION(execGetActiveStateName); \
	DECLARE_FUNCTION(execLoadFromMultipleStates); \
	DECLARE_FUNCTION(execLoadFromState); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execStartWithNewContext); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetContext); \
	DECLARE_FUNCTION(execIsTickableWhenPaused); \
	DECLARE_FUNCTION(execIsTickable); \
	DECLARE_FUNCTION(execTick);


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_EVENT_PARMS \
	struct SMInstance_eventOnStateMachineStateChanged_Parms \
	{ \
		FSMStateInfo ToState; \
		FSMStateInfo FromState; \
	}; \
	struct SMInstance_eventOnStateMachineTransitionTaken_Parms \
	{ \
		FSMTransitionInfo Transition; \
	}; \
	struct SMInstance_eventOnStateMachineUpdate_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct SMInstance_eventTick_Parms \
	{ \
		float DeltaTime; \
	};


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_CALLBACK_WRAPPERS
#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMInstance(); \
	friend struct Z_Construct_UClass_USMInstance_Statics; \
public: \
	DECLARE_CLASS(USMInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		R_StateMachineContext=NETFIELD_REP_START, \
		R_ActiveStates, \
		R_bHasStarted, \
		NETFIELD_REP_END=R_bHasStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUSMInstance(); \
	friend struct Z_Construct_UClass_USMInstance_Statics; \
public: \
	DECLARE_CLASS(USMInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMInstance) \
	virtual UObject* _getUObject() const override { return const_cast<USMInstance*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		R_StateMachineContext=NETFIELD_REP_START, \
		R_ActiveStates, \
		R_bHasStarted, \
		NETFIELD_REP_END=R_bHasStarted	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(USMInstance) \
public:


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstance(USMInstance&&); \
	NO_API USMInstance(const USMInstance&); \
public:


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstance(USMInstance&&); \
	NO_API USMInstance(const USMInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMInstance)


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ComponentOwner() { return STRUCT_OFFSET(USMInstance, ComponentOwner); } \
	FORCEINLINE static uint32 __PPO__ServerStateMachine() { return STRUCT_OFFSET(USMInstance, ServerStateMachine); } \
	FORCEINLINE static uint32 __PPO__ActiveTransactions() { return STRUCT_OFFSET(USMInstance, ActiveTransactions); } \
	FORCEINLINE static uint32 __PPO__RootStateMachine() { return STRUCT_OFFSET(USMInstance, RootStateMachine); } \
	FORCEINLINE static uint32 __PPO__R_StateMachineContext() { return STRUCT_OFFSET(USMInstance, R_StateMachineContext); } \
	FORCEINLINE static uint32 __PPO__R_ActiveStates() { return STRUCT_OFFSET(USMInstance, R_ActiveStates); } \
	FORCEINLINE static uint32 __PPO__ReferenceOwner() { return STRUCT_OFFSET(USMInstance, ReferenceOwner); } \
	FORCEINLINE static uint32 __PPO__StateMachineClass() { return STRUCT_OFFSET(USMInstance, StateMachineClass); } \
	FORCEINLINE static uint32 __PPO__bAutoManageTime() { return STRUCT_OFFSET(USMInstance, bAutoManageTime); } \
	FORCEINLINE static uint32 __PPO__bStopOnEndState() { return STRUCT_OFFSET(USMInstance, bStopOnEndState); } \
	FORCEINLINE static uint32 __PPO__bCanEverTick() { return STRUCT_OFFSET(USMInstance, bCanEverTick); } \
	FORCEINLINE static uint32 __PPO__bCanTickWhenPaused() { return STRUCT_OFFSET(USMInstance, bCanTickWhenPaused); } \
	FORCEINLINE static uint32 __PPO__TickInterval() { return STRUCT_OFFSET(USMInstance, TickInterval); } \
	FORCEINLINE static uint32 __PPO__bTickRegistered() { return STRUCT_OFFSET(USMInstance, bTickRegistered); } \
	FORCEINLINE static uint32 __PPO__bTickBeforeInitialize() { return STRUCT_OFFSET(USMInstance, bTickBeforeInitialize); } \
	FORCEINLINE static uint32 __PPO__MaxTimeToWaitForUpdate() { return STRUCT_OFFSET(USMInstance, MaxTimeToWaitForUpdate); } \
	FORCEINLINE static uint32 __PPO__TimeSinceAllowedTick() { return STRUCT_OFFSET(USMInstance, TimeSinceAllowedTick); } \
	FORCEINLINE static uint32 __PPO__WorldSeconds() { return STRUCT_OFFSET(USMInstance, WorldSeconds); } \
	FORCEINLINE static uint32 __PPO__WorldTimeDelta() { return STRUCT_OFFSET(USMInstance, WorldTimeDelta); } \
	FORCEINLINE static uint32 __PPO__bCallTickOnManualUpdate() { return STRUCT_OFFSET(USMInstance, bCallTickOnManualUpdate); } \
	FORCEINLINE static uint32 __PPO__bIsTicking() { return STRUCT_OFFSET(USMInstance, bIsTicking); } \
	FORCEINLINE static uint32 __PPO__bIsUpdating() { return STRUCT_OFFSET(USMInstance, bIsUpdating); }


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_78_PROLOG \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_EVENT_PARMS


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_SPARSE_DATA \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_RPC_WRAPPERS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_CALLBACK_WRAPPERS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_INCLASS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_SPARSE_DATA \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_CALLBACK_WRAPPERS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h_81_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SMSystem_Source_SMSystem_Public_SMInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
