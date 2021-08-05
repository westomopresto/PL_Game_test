// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "EdGraphSchema_K2.h"
#include "SMGraphK2Schema.h"
#include "SMStateGraphSchema.generated.h"

UCLASS(MinimalAPI)
class USMStateGraphSchema : public USMGraphK2Schema
{
	GENERATED_UCLASS_BODY()

	//~ Begin UEdGraphSchema Interface.
	virtual void CreateDefaultNodesForGraph(UEdGraph& Graph) const override;
	virtual void GetGraphDisplayInformation(const UEdGraph& Graph, /*out*/ FGraphDisplayInfo& DisplayInfo) const override;
	virtual void HandleGraphBeingDeleted(UEdGraph& GraphBeingRemoved) const override;
	//~ End UEdGraphSchema Interface.
};

