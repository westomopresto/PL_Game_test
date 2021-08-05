// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USMTransitionInstance;
struct FSMTransitionInfo;
class USMStateInstance_Base;
#ifdef SMSYSTEM_SMTransitionInstance_generated_h
#error "SMTransitionInstance.generated.h already included, missing '#pragma once' in SMTransitionInstance.h"
#endif
#define SMSYSTEM_SMTransitionInstance_generated_h

#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_9_DELEGATE \
struct _Script_SMSystem_eventOnTransitionEnteredSignature_Parms \
{ \
	USMTransitionInstance* TransitionInstance; \
}; \
static inline void FOnTransitionEnteredSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTransitionEnteredSignature, USMTransitionInstance* TransitionInstance) \
{ \
	_Script_SMSystem_eventOnTransitionEnteredSignature_Parms Parms; \
	Parms.TransitionInstance=TransitionInstance; \
	OnTransitionEnteredSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_SPARSE_DATA
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_RPC_WRAPPERS \
	virtual void OnTransitionShutdown_Implementation(); \
	virtual void OnTransitionInitialized_Implementation(); \
	virtual void OnTransitionEntered_Implementation(); \
	virtual bool CanEnterTransition_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetTransitionInfo); \
	DECLARE_FUNCTION(execGetNextStateInstance); \
	DECLARE_FUNCTION(execGetPreviousStateInstance); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execOnTransitionShutdown); \
	DECLARE_FUNCTION(execOnTransitionInitialized); \
	DECLARE_FUNCTION(execOnTransitionEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransitionInfo); \
	DECLARE_FUNCTION(execGetNextStateInstance); \
	DECLARE_FUNCTION(execGetPreviousStateInstance); \
	DECLARE_FUNCTION(execGetCanEvaluate); \
	DECLARE_FUNCTION(execSetCanEvaluate); \
	DECLARE_FUNCTION(execOnTransitionShutdown); \
	DECLARE_FUNCTION(execOnTransitionInitialized); \
	DECLARE_FUNCTION(execOnTransitionEntered); \
	DECLARE_FUNCTION(execCanEnterTransition);


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_EVENT_PARMS \
	struct SMTransitionInstance_eventCanEnterTransition_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SMTransitionInstance_eventCanEnterTransition_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_CALLBACK_WRAPPERS
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSMTransitionInstance(); \
	friend struct Z_Construct_UClass_USMTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(USMTransitionInstance, USMNodeInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMTransitionInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSMTransitionInstance(); \
	friend struct Z_Construct_UClass_USMTransitionInstance_Statics; \
public: \
	DECLARE_CLASS(USMTransitionInstance, USMNodeInstance, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SMSystem"), NO_API) \
	DECLARE_SERIALIZER(USMTransitionInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMTransitionInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMTransitionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMTransitionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMTransitionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMTransitionInstance(USMTransitionInstance&&); \
	NO_API USMTransitionInstance(const USMTransitionInstance&); \
public:


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMTransitionInstance(USMTransitionInstance&&); \
	NO_API USMTransitionInstance(const USMTransitionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMTransitionInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMTransitionInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USMTransitionInstance)


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_PRIVATE_PROPERTY_OFFSET
#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_14_PROLOG \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_EVENT_PARMS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_RPC_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_INCLASS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_PRIVATE_PROPERTY_OFFSET \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_SPARSE_DATA \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_CALLBACK_WRAPPERS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_INCLASS_NO_PURE_DECLS \
	PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMSYSTEM_API UClass* StaticClass<class USMTransitionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PL_Game_Plugins_LogicDriver_Source_SMSystem_Public_Nodes_Transitions_SMTransitionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
