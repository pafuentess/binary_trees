#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: parent node
* Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
* binary_tree_is_perfect - checks if a binary tree is perfect.
* @tree: pointer to the root node of the tree to check
* Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
		return (1);
	return (0);
}
