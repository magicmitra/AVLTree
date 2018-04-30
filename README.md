# AVLTree

AVL Tree for integers. 
1) For every node, everything > than this node will be in the node's right subtree.
2) For every node, everything < than this node will be in the node's left subtree.
3) Duplicate entries not allowed. 

Balancing rule:
The height of a node's left and right subtrees can be no more than 1 (depth). This ensures a big-O of O(log N) when searching for a node.

Rotation cases:
1. Case 1: The imbalance is in the LEFT subtree of the root's LEFT child.
2. Case 2: The imbalance is in the RIGHT subtree of the root's LEFT child.
3. Case 3: The imbalance is in the LEFT subtree of the root's RIGHT child.
4. Case 4: The imbalance is in the RIGHT subtree of the root's RIGHT child.

Case 1 and Case 4 requires single rotations to balance.
Case 2 and Case 3 requires double rotations to balance. This is due to their imbalances being in the inside of the tree. 
