// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#include "SMNodeRules.h"
#include "SMConduitInstance.h"
#include "SMStateInstance.h"
#include "SMStateMachineInstance.h"
#include "SMTransitionInstance.h"

FSMNodeClassRule::FSMNodeClassRule(): bIncludeChildren(true), bNOT(false)
{
}

bool FSMNodeClassRule::IsBaseClass(UClass* Class)
{
	return !Class ||
		Class == USMNodeInstance::StaticClass() || Class == USMStateInstance_Base::StaticClass() ||
		Class == USMStateInstance::StaticClass() || Class == USMStateMachineInstance::StaticClass() ||
		Class == USMTransitionInstance::StaticClass() || Class == USMConduitInstance::StaticClass();
}

UClass* FSMStateClassRule::GetClass() const
{
	return StateClass.Get();
}

UClass* FSMStateMachineClassRule::GetClass() const
{
	return StateMachineClass.Get();
}

FSMNodeConnectionRule::FSMNodeConnectionRule()
{
}

bool FSMNodeConnectionRule::DoesClassMatch(UClass* ExpectedClass, UClass* ActualClass, const FSMNodeClassRule& Rule)
{
	if(!ExpectedClass)
	{
		// None implies all.
		return true;
	}

	if(!ActualClass)
	{
		// Check if we're expecting a base class which means no class may be set.
		return FSMNodeClassRule::IsBaseClass(ExpectedClass) ? !Rule.bNOT : Rule.bNOT;
	}

	const bool bResult = Rule.bIncludeChildren ? ActualClass->IsChildOf(ExpectedClass) : ActualClass == ExpectedClass;
	return Rule.bNOT ? !bResult : bResult;
}

bool FSMTransitionConnectionValidator::IsConnectionValid(UClass* FromClass, UClass* ToClass, UClass* StateMachineClass, bool bPassOnNoRules) const
{
	// No rules makes this action always valid.
	if((AllowedConnections.Num() == 0 || (FromClass == nullptr && ToClass == nullptr)) && bPassOnNoRules)
	{
		return true;
	}
	
	for(const FSMNodeConnectionRule& Rule : AllowedConnections)
	{
		if( !FSMNodeConnectionRule::DoesClassMatch(Rule.InStateMachine.StateMachineClass.Get(), StateMachineClass, Rule.InStateMachine) ||
			!FSMNodeConnectionRule::DoesClassMatch(Rule.FromState.StateClass.Get(), FromClass, Rule.FromState) ||
			!FSMNodeConnectionRule::DoesClassMatch(Rule.ToState.StateClass.Get(), ToClass, Rule.ToState))
		{
			continue;
		}
		
		return true;
	}

	return false;
}

bool FSMStateConnectionValidator::IsInboundConnectionValid(UClass* FromClass,
	UClass* StateMachineClass) const
{
	if(!FSMNodeConnectionRule::DoRulesPass<FSMStateMachineClassRule>(StateMachineClass, AllowedInStateMachines))
	{
		return false;
	}
	
	if (!FSMNodeConnectionRule::DoRulesPass<FSMStateClassRule>(FromClass, AllowedInboundStates))
	{
		return false;
	}

	return true;
}

bool FSMStateConnectionValidator::IsOutboundConnectionValid(UClass* ToClass,
	UClass* StateMachineClass) const
{
	if (!FSMNodeConnectionRule::DoRulesPass<FSMStateMachineClassRule>(StateMachineClass, AllowedInStateMachines))
	{
		return false;
	}

	if (!FSMNodeConnectionRule::DoRulesPass<FSMStateClassRule>(ToClass, AllowedOutboundStates))
	{
		return false;
	}

	return true;
}

FSMStateMachineNodePlacementValidator::FSMStateMachineNodePlacementValidator() : Super(),
                                                                                 bAllowReferences(true),
                                                                                 bAllowParents(true)
{
}

bool FSMStateMachineNodePlacementValidator::IsStateAllowed(UClass* StateClass) const
{
	return FSMNodeConnectionRule::DoRulesPass<FSMStateClassRule>(StateClass, AllowedStates);
}
