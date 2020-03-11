#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: node to check
* Return: amount of nodes in the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
