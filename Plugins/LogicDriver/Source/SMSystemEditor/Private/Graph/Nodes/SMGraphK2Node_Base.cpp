// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#include "SMGraphK2Node_Base.h"
#include "EdGraph/EdGraphPin.h"
#include "SMGraphNode_Base.h"
#include "EdGraphSchema_K2.h"

#define LOCTEXT_NAMESPACE "SMGraphK2Node_Base"

USMGraphK2Node_Base::USMGraphK2Node_Base(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UK2Node::ERedirectType USMGraphK2Node_Base::DoPinsMatchForReconstruction(const UEdGraphPin* NewPin, int32 NewPinIndex,
	const UEdGraphPin* OldPin, int32 OldPinIndex) const
{
	ERedirectType RedirectType = Super::DoPinsMatchForReconstruction(NewPin, NewPinIndex, OldPin, OldPinIndex);

	/*
	 * Old output pins used to be named TEXT("") when they should have been PN_Then.
	 */
	if ((RedirectType == ERedirectType::ERedirectType_None) && (NewPin != nullptr) && (OldPin != nullptr))
	{
		if (OldPin->Direction == EEdGraphPinDirection::EGPD_Output && OldPin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec && OldPin->GetFName() == NAME_None)
		{
			RedirectType = ERedirectType::ERedirectType_Name;
		}
	}

	return RedirectType;
}

UEdGraphPin* USMGraphK2Node_Base::GetInputPin() const
{
	if (Pins.Num() == 0 || Pins[INDEX_PIN_INPUT]->Direction == EGPD_Output)
	{
		return nullptr;
	}

	return Pins[INDEX_PIN_INPUT];
}

UEdGraphPin* USMGraphK2Node_Base::GetOutputPin() const
{
	for (UEdGraphPin* Pin : Pins)
	{
		if (Pin->Direction == EGPD_Output)
		{
			return Pin;
		}
	}

	return nullptr;
}

UEdGraphNode* USMGraphK2Node_Base::GetOutputNode() const
{
	UEdGraphPin* OutputPin = GetOutputPin();

	if (OutputPin)
	{
		check(OutputPin->LinkedTo.Num() <= 1);
		if (OutputPin->LinkedTo.Num() > 0 && OutputPin->LinkedTo[INDEX_PIN_INPUT]->GetOwningNode() != nullptr)
		{
			return OutputPin->LinkedTo[INDEX_PIN_INPUT]->GetOwningNode();
		}
	}

	return nullptr;
}

UEdGraphPin* USMGraphK2Node_Base::GetThenPin() const
{
	return FindPin(UEdGraphSchema_K2::PN_Then);
}

#undef LOCTEXT_NAMESPACE
