#include "binary_trees.h"
#include <stdio.h>


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int lheight = -1;
    	int rheight = -1;

    	if (tree == NULL) 
        	return 0;
	if (binary_tree_is_leaf(tree))
		return (1);
    	lheight = binary_tree_leaves(tree->left);
    	rheight = binary_tree_leaves(tree->right);

	return (lheight + rheight);
}
