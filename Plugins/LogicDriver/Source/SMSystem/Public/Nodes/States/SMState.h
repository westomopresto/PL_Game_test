// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "SMNode_Base.h"
#include "SMState.generated.h"

#define GRAPH_PROPERTY_EVAL_ANY					0
#define GRAPH_PROPERTY_EVAL_ON_START			1
#define GRAPH_PROPERTY_EVAL_ON_UPDATE			2
#define GRAPH_PROPERTY_EVAL_ON_END				3
#define GRAPH_PROPERTY_EVAL_ON_INITIALIZE		4
#define GRAPH_PROPERTY_EVAL_ON_ROOT_SM_START	5
#define GRAPH_PROPERTY_EVAL_ON_ROOT_SM_STOP		6

struct FSMTransition;
struct FSMStateInfo;

/**
 * The base class for all state typed nodes. This should never be instantiated by itself but inherited by children.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMState_Base : public FSMNode_Base
{
	GENERATED_USTRUCT_BODY()

public:
//#pragma region Blueprint Graph Exposed

	/** Entry node to state machine. */
	UPROPERTY()
	uint32 bIsRootNode: 1;

	/** Always call state update at least once before ending. */
	UPROPERTY()
	uint32 bAlwaysUpdate: 1;

	/** Allows transitions to be evaluated in the same tick as Start State. */
	UPROPERTY()
	uint32 bEvalTransitionsOnStart: 1;

	/** Prevents conditional transitions for this state from being evaluated on Tick. */
	UPROPERTY()
	uint32 bDisableTickTransitionEvaluation: 1;

	/** If the state should remain active even after a transition is taken from this state. */
	UPROPERTY()
	uint32 bStayActiveOnStateChange: 1;

	/** If this state can be reentered from a parallel state if this state is already active. */
	UPROPERTY()
	uint32 bAllowParallelReentry: 1;

	/** When the owning blueprint's root state machine starts. */
	UPROPERTY()
	FSMExposedFunctionHandler OnRootStateMachineStartedGraphEvaluator;

	/** When the owning blueprint's root state machine stops. */
	UPROPERTY()
	FSMExposedFunctionHandler OnRootStateMachineStoppedGraphEvaluator;
	
public:
	virtual void UpdateReadStates() override;
	void ResetReadStates();

//#pragma endregion

public:
	FSMState_Base();

	// FSMNode_Base
	virtual void Initialize(UObject* Instance) override;
	virtual void Reset() override;
	virtual bool IsNodeInstanceClassCompatible(UClass* NewNodeInstanceClass) const override;
	virtual UClass* GetDefaultNodeInstanceClass() const override;
	virtual void ExecuteInitializeNodes() override;
	// ~ FSMNode_Base

	/** The transitions leading out from this state, sorted lowest to highest priority. */
	const TArray<FSMTransition*>& GetOutgoingTransitions() const { return OutgoingTransitions; }

	/** The transitions leading to this state. */
	const TArray<FSMTransition*>& GetIncomingTransitions() const { return IncomingTransitions; }
	
	/** Returns all connected transitions from this state, including ones connected to transition conduits. */
	void GetAllTransitionChains(TArray<FSMTransition*>& OutTransitions) const;
	
	/** Sets the state as active and begins execution. */
	virtual bool StartState();
	/** Runs the update execution. */
	virtual bool UpdateState(float DeltaSeconds);
	/** Runs the end state execution. Transition to take is so the state knows where it is going only. */
	virtual bool EndState(float DeltaSeconds, const FSMTransition* TransitionToTake = nullptr);

	/** Called when the blueprint owning this node is started. */
	virtual void OnStartedByInstance(USMInstance* Instance);

	/** Called when the blueprint owning this node has stopped. */
	virtual void OnStoppedByInstance(USMInstance* Instance);
	
	/**
	 * Runs through the transitions executing their graphs until a result is found.
	 * Builds an ordered list of transitions to take.
	 * @param Transitions Found transitions. 2D Array of valid paths. If the total size is more than one that means these transitions are leading to parallel states.
	 * if each path is more than one that means there are transition conduits involved.
	 * @return True if a valid path is found, false otherwise.
	 */
	virtual bool GetValidTransition(TArray<TArray<FSMTransition*>>& Transitions);

	/** If the state itself is an end state. */
	virtual bool IsEndState() const;

	/** Helper for state machine. */
	virtual bool IsInEndState() const;

	/** Has updated at least once. */
	virtual bool HasUpdated() const;

	/** Easy way to check if this state struct is a state machine. */
	virtual bool IsStateMachine() const { return false; }

	/** Easy way to check if this state struct is a conduit. */
	virtual bool IsConduit() const { return false; }

	/** If this node is an initial entry point. */
	bool IsRootNode() const { return bIsRootNode; }
	
	/** Current time in seconds this state has been active. */
	float GetActiveTime() const { return TimeInState; }

	/** Set if this state is allowed to execute its logic. */
	void SetCanExecuteLogic(bool bValue);

	/** If this state is allowed to execute logic. */
	bool CanExecuteLogic() const { return bCanExecuteLogic; }

	/**
	 * Checks if the instance is allowed to execute properties automatically.
	 * @param OnEvent 0 - Start, 1 - Update, 2 - End, 3 - RootSMStart
	 */
	bool CanExecuteGraphProperties(uint32 OnEvent) const;
	
	/** If this state is allowed to evaluate its transitions on tick. This can return true even when tick evaluation is false in the event
	 * an outgoing transition has just completed from an event. */
	bool CanEvaluateTransitionsOnTick() const;

	void SetTransitionToTake(const FSMTransition* Transition);
	/** If set this is the transition the state will take. Generally only valid when EndState is called and if this state is not an end state. */
	const FSMTransition* GetTransitionToTake() const { return NextTransition; }

	/** Record the previous active state before this one. */
	void SetPreviousEnteredState(FSMState_Base* PreviousState);

	/** The last state entered previous to this state. */
	FSMState_Base* GetPreviousEnteredState() const { return PreviousEnteredState; }
	
	/** This state is being reentered from a parallel state. */
	void NotifyOfParallelReentry(bool bValue = true);

	/** This state has just been entered from a parallel state while already active. May be true only for OnStateBegin. */
	bool HasBeenReenteredFromParallelState() const { return bReenteredByParallelState; }

	/** True while the state is ending and graph execution is occurring. Prevents restarting this state when it triggers transitions while ending. */
	bool IsStateEnding() const { return bIsStateEnding; }
	
protected:
	friend struct FSMTransition;
	void AddOutgoingTransition(FSMTransition* Transition);
	void AddIncomingTransition(FSMTransition* Transition);
	
	/** Helpers to call any special transition logic. */
	void InitializeTransitions();
	void ShutdownTransitions();
protected:
	/** The last active state before this state. Resets on entry. */
	FSMState_Base* PreviousEnteredState;

	/** True only when already active and entered from a parallel state. */
	bool bReenteredByParallelState;
	bool bCanExecuteLogic = true;

	/** True while the state is ending and graph execution is occurring. Prevents restarting this state when it triggers transitions while ending. */
	bool bIsStateEnding = false;
	
private:
	const FSMTransition* NextTransition;
	TArray<FSMTransition*> IncomingTransitions;
	TArray<FSMTransition*> OutgoingTransitions;
};

/**
 * State nodes that can execute Blueprint logic.
 */
USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMState : public FSMState_Base
{
	GENERATED_USTRUCT_BODY()

public:
//#pragma region Blueprint Graph Exposed

	UPROPERTY()
	FSMExposedFunctionHandler UpdateStateGraphEvaluator;

	UPROPERTY()
	FSMExposedFunctionHandler EndStateGraphEvaluator;
	
//#pragma endregion

public:
	FSMState();

	// FSMNode_Base
	virtual void Initialize(UObject* Instance) override;
	virtual void Reset() override;
	virtual void ExecuteInitializeNodes() override;
	virtual void ExecuteShutdownNodes() override;
	// ~ FSMNode_Base

	// FSMState_Base

	/** Begins state execution. */
	virtual bool StartState() override;
	/** Runs the update execution. */
	virtual bool UpdateState(float DeltaSeconds) override;
	/** Runs the end state execution. */
	virtual bool EndState(float DeltaSeconds, const FSMTransition* TransitionToTake = nullptr) override;

	virtual void OnStartedByInstance(USMInstance* Instance) override;
	virtual void OnStoppedByInstance(USMInstance* Instance) override;
	// ~FSMState_Base
};