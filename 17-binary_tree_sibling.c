#include "binary_trees.h"


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL)
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
