// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMStateInstance_Base;
class USMTransitionInstance;
struct FSMStateInfo;
class USMStateInstance;
#ifdef SMSYSTEM_SMStateInstance_generated_h
#error "SMStateInstance.generated.h already included, missing '#pragma once' in SMStateInstance.h"
#endif
#define SMSYSTEM_SMStateInstance_generated_h

#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_12_DELEGATE \
struct _Script_SMSystem_eventOnStateEndSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
}; \
static inline void FOnStateEndSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateEndSignature, USMStateInstance_Base* StateInstance) \
{ \
	_Script_SMSystem_eventOnStateEndSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	OnStateEndSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_11_DELEGATE \
struct _Script_SMSystem_eventOnStateUpdateSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
	float DeltaSeconds; \
}; \
static inline void FOnStateUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateUpdateSignature, USMStateInstance_Base* StateInstance, float DeltaSeconds) \
{ \
	_Script_SMSystem_eventOnStateUpdateSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	Parms.DeltaSeconds=DeltaSeconds; \
	OnStateUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_10_DELEGATE \
struct _Script_SMSystem_eventOnStateBeginSignature_Parms \
{ \
	USMStateInstance_Base* StateInstance; \
}; \
static inline void FOnStateBeginSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStateBeginSignature, USMStateInstance_Base* StateInstance) \
{ \
	_Script_SMSystem_eventOnStateBeginSignature_Parms Parms; \
	Parms.StateInstance=StateInstance; \
	OnStateBeginSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_SPARSE_DATA
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_RPC_WRAPPERS \
	virtual void OnRootStateMachineStop_Implementation(); \
	virtual void OnRootStateMachineStart_Implementation(); \
	virtual void OnStateEnd_Implementation(); \
	virtual void OnStateUpdate_Implementation(float DeltaSeconds); \
	virtual void OnStateBegin_Implementation(); \
 \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextStateByTransitionIndex); \
	DECLARE_FUNCTION(execGetTransitionByIndex); \
	DECLARE_FUNCTION(execSwitchToLinkedState); \
	DECLARE_FUNCTION(execGetTransitionToTake); \
	DECLARE_FUNCTION(execGetIncomingTransitions); \
	DECLARE_FUNCTION(execGetOutgoingTransitions); \
	DECLARE_FUNCTION(execEvaluateTransitions); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsStateMachine); \
	DECLARE_FUNCTION(execGetStateInfo); \
	DECLARE_FUNCTION(execOnRootStateMachineStop); \
	DECLARE_FUNCTION(execOnRootStateMachineStart); \
	DECLARE_FUNCTION(execOnStateEnd); \
	DECLARE_FUNCTION(execOnStateUpdate); \
	DECLARE_FUNCTION(execOnStateBegin);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_EVENT_PARMS \
	struct SMStateInstance_Base_eventOnStateUpdate_Parms \
	{ \
		float DeltaSeconds; \
	};


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_CALLBACK_WRAPPERS
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance_Base(); \
	friend struct Z_Construct_UClass_USMStateInstance_Base_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance_Base, USMNodeInstance, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance_Base)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateInstance_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateInstance_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance_Base(USMStateInstance_Base&&); \
	NO_API USMStateInstance_Base(const USMStateInstance_Base&); \
public:


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance_Base(USMStateInstance_Base&&); \
	NO_API USMStateInstance_Base(const USMStateInstance_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance_Base)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_PRIVATE_PROPERTY_OFFSET
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_17_PROLOG \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_EVENT_PARMS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_RPC_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_INCLASS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_INCLASS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance_Base>();

#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_SPARSE_DATA
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_RPC_WRAPPERS \
	virtual void OnStateShutdown_Implementation(); \
	virtual void OnStateInitialized_Implementation(); \
 \
	DECLARE_FUNCTION(execGetStateStackCount); \
	DECLARE_FUNCTION(execGetAllStatesInStackOfClass); \
	DECLARE_FUNCTION(execGetStackOwnerInstance); \
	DECLARE_FUNCTION(execGetStateInStackByClass); \
	DECLARE_FUNCTION(execGetStateInStack); \
	DECLARE_FUNCTION(execGetAllStateStackInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStateStackCount); \
	DECLARE_FUNCTION(execGetAllStatesInStackOfClass); \
	DECLARE_FUNCTION(execGetStackOwnerInstance); \
	DECLARE_FUNCTION(execGetStateInStackByClass); \
	DECLARE_FUNCTION(execGetStateInStack); \
	DECLARE_FUNCTION(execGetAllStateStackInstances); \
	DECLARE_FUNCTION(execOnStateShutdown); \
	DECLARE_FUNCTION(execOnStateInitialized);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_EVENT_PARMS
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_CALLBACK_WRAPPERS
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_INCLASS \
private: \
	static void StaticRegisterNativesUSMStateInstance(); \
	friend struct Z_Construct_UClass_USMStateInstance_Statics; \
public: \
	DECLARE_CLASS(USMStateInstance, USMStateInstance_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMStateInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMStateInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMStateInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance(USMStateInstance&&); \
	NO_API USMStateInstance(const USMStateInstance&); \
public:


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMStateInstance(USMStateInstance&&); \
	NO_API USMStateInstance(const USMStateInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMStateInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMStateInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMStateInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_PRIVATE_PROPERTY_OFFSET
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_281_PROLOG \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_EVENT_PARMS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_RPC_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_INCLASS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_INCLASS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMStateInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_States_SMStateInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
