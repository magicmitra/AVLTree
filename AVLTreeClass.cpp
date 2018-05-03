#include "stdafx.h"
#include "AVLTreeClass.h"
#include "AVLNode.h"
#include <algorithm>

// declarations?

// empty AVLTreeClass
AVLTreeClass::AVLTreeClass()
{
	// create a clear method in here somehow. 
}

// create an AVLTree with a specified root
AVLTreeClass::AVLTreeClass(int obj)
{
	// constructor
	// TODO creat "add" method
	// add(obj, root) -> signature
}


AVLTreeClass::~AVLTreeClass()
{
	// destructor
}

// fix the imbalances

// case 1 
AVLNode AVLTreeClass::caseOneRotation(AVLNode* k2)
{
	AVLNode k1 = *k2->left;
	k2->left = k1.right;
	k1.right = k2;
	k2->height = std::max(height(k2->left), height(k2->right)) + 1;
	k1.height = std::max(height(k1.left), k2->height) + 1;
	return k1;
}

// case 2
AVLNode AVLTreeClass::caseTwoRotation(AVLNode* k3)
{
	// TODO
	
	return *k3;
}

// case 3
AVLNode AVLTreeClass::caseThreeRotation(AVLNode* k3)
{
	// TODO

	return *k3;
}

// case 4
AVLNode AVLTreeClass::caseFourRotation(AVLNode* k2)
{
	AVLNode k1 = *k2->right;
	k2->right = k1.left;
	k1.left = k2;
	k2->height = std::max(height(k2->left), height(k2->right)) + 1;
	k1.height = std::max(height(k1.right), k2->height) + 1;
	return k1;
}

// implement method to get node height
int AVLTreeClass::height(AVLNode* node)
{
	return node == 0 ? -1 : node->height;
}

