#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_height - measures the height of a binary tree
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (1 + lheight);
	return (1 + rheight);
}
/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: node to check
* Return: 1 or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	return (lheight - rheight);
}
