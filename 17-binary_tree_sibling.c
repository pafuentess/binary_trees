#include "binary_trees.h"
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
* binary_tree_is_full - checks if a binary tree is full
* @tree: node to check
* Return: 1 or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);

	lheight = binary_tree_is_full(tree->right);
	rheight = binary_tree_is_full(tree->left);
	if (lheight == 0 || rheight == 0)
		return (0);
	return (1);
}
/**
* binary_tree_sibling - finds the sibling of a node
* @node: is a pointer to the node to find the sibling
* Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (binary_tree_is_full(node->parent) == 1)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
