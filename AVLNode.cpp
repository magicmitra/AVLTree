#include "stdafx.h"
#include "AVLNode.h"

AVLNode::AVLNode(int obj)
{
	theItem = obj;
	left = 0;
	right = 0;
}

// overloaded AVLNode
AVLNode::AVLNode(int obj, AVLNode *leftChild, AVLNode *rightChild)
{
	theItem = obj;
	left = leftChild;
	right = rightChild;
}

AVLNode::AVLNode()
{
	// default constructor
}


AVLNode::~AVLNode()
{
}

