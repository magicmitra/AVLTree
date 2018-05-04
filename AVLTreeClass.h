/* AVL Tree Class 
 * implementation of a rooted tree in which each node of the tree can 
 * have a max of 2 child nodes. The items in the tree are sorted according
 * to the following rules:
 * 1) items < a given item, x, will be located in x's left subtree.
 * 2) items > a given item, x, will be located in x's right subtree.
 * 3) No duplicate items allowed. 
 * Tree's balancing rule: 
 * -> For any given node, x, the heights of x's left and right 
 * subtrees can differ by no more than 1. 
 * This is for INTS only....... for now..........
 */
#pragma once
#include "AVLNode.h"
class AVLTreeClass
{
public:
	// public attributes
	AVLTreeClass(); 
	AVLTreeClass(int rootNode);
	~AVLTreeClass();
	int getRootItem();
protected:
	// protected attributes
	int theSize;
	int modCount;
	int height(AVLNode* node);
private:
	// private attributes
	AVLNode root;
	AVLNode* caseOneRotation(AVLNode* k2);
	AVLNode* caseTwoRotation(AVLNode* k3);
	AVLNode* caseThreeRotation(AVLNode* k3);
	AVLNode* caseFourRotation(AVLNode* k2);
};

