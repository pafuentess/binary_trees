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
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: node to check
* Return: amount of leaves in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int lheight = -1;
	int rheight = -1;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	lheight = binary_tree_leaves(tree->left);
	rheight = binary_tree_leaves(tree->right);

	return (lheight + rheight);
}
