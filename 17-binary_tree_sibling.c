#include "binary_trees.h"

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
