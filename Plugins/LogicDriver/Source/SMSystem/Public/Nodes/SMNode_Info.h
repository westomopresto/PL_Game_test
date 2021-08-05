// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "SMNode_Info.generated.h"

struct FSMState_Base;
struct FSMTransition;
struct FSMNode_Base;


USTRUCT(BlueprintInternalUseOnly)
struct SMSYSTEM_API FSMInfo_Base
{
	GENERATED_USTRUCT_BODY()

	FSMInfo_Base();
	FSMInfo_Base(const FSMNode_Base& Node);
	virtual ~FSMInfo_Base() = default;
	
	/** Friendly name of this node. Not guaranteed to be unique. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FString NodeName;
	
	/** Unique identifier calculated from a node's position in an instance. The PathGuid of FSMNode_Base. Compatible with TryGetInfo. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid Guid;

	/** The state machine's PathGuid owning this node. Compatible with TryGetStateInfo.*/
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid OwnerGuid;

	/** Guid assigned to this node during creation. May not be unique if this node is referenced multiple times. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid NodeGuid;

	/** Guid assigned to the parent node during creation. May not be unique if this node is referenced multiple times. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid OwnerNodeGuid;

	/** The node instance for this class. This will either be a default StateInstance or TransitionInstance, or a user defined one. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	class USMNodeInstance* NodeInstance;

	virtual FString ToString() const;
};

USTRUCT(BlueprintType, meta = (DisplayName = "Transition Information"))
struct SMSYSTEM_API FSMTransitionInfo : public FSMInfo_Base
{
	GENERATED_USTRUCT_BODY()

	FSMTransitionInfo();
	FSMTransitionInfo(const FSMTransition& Transition);

	/** Use TryGetStateInfo from the instance to retrieve this state information. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid FromStateGuid;

	/** Use TryGetStateInfo from the instance to retrieve this state information. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	FGuid ToStateGuid;

	/** The assigned transition priority. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	int32 Priority;

	const FSMTransition* OwningTransition;

	virtual FString ToString() const override;
};

USTRUCT(BlueprintType, meta = (DisplayName = "State Information"))
struct SMSYSTEM_API FSMStateInfo : public FSMInfo_Base
{
	GENERATED_USTRUCT_BODY()

	FSMStateInfo();
	FSMStateInfo(const FSMState_Base& State);

	/** All of the transitions leading out of this state. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	TArray<FSMTransitionInfo> OutgoingTransitions;

	/** If this state is considered an end state. */
	UPROPERTY(BlueprintReadOnly, Category = "State Machines")
	bool bIsEndState;

	const FSMState_Base* OwningState;
};