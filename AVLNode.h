/* AVL Node 
 * user as nodes for the AVLTreeClass
 */
#pragma once

class AVLNode
{
public:
	AVLNode(int obj);
	AVLNode(int obj, AVLNode *leftChild, AVLNode *rightChild);
	AVLNode();
	~AVLNode();

	// data item, left child, right child, height
	int theItem;
	AVLNode* left;
	AVLNode* right;
	int height;
};

