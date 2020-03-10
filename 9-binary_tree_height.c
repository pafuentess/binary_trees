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



/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    int lheight = -1;
    int rheight = -1;

    if (tree == NULL || binary_tree_is_leaf(tree) == 1) 
        return 0;
    lheight = binary_tree_height(tree->left);
    rheight = binary_tree_height(tree->right);

    if (lheight >= rheight)
        return (1 + lheight);
    return (1 + rheight);
}
