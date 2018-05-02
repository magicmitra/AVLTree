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
	// TODO
	AVLNode k1 = *(k2->left);
	k2->left = k1.right;
	k1.right = k2;
	
	return k1;
}

