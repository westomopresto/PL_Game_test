// Copyright Recursoft LLC 2019-2020. All Rights Reserved.
#include "SGraphNode_StateMachineNode.h"
#include "SGraphPin.h"
#include "Graph/SMGraph.h"
#include "Graph/Nodes/SMGraphK2Node_StateMachineNode.h"


void SGraphNode_StateMachineNode::Construct(const FArguments& InArgs, USMGraphK2Node_StateMachineNode* InNode)
{
	GraphNode = InNode;

	SetCursor(EMouseCursor::CardinalCross);

	UpdateGraphNode();
}

UEdGraph* SGraphNode_StateMachineNode::GetInnerGraph() const
{
	USMGraphK2Node_StateMachineNode* StateMachineInstance = CastChecked<USMGraphK2Node_StateMachineNode>(GraphNode);

	return Cast<UEdGraph>(StateMachineInstance->GetStateMachineGraph());
}
