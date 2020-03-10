#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
        return 0;
    if (node->left == NULL && node->right == NULL)
        return 1;
    return 0;
}
