#include "binary_trees.h"

/**
* binary_tree_rotate_left - rotate to left
* @tree: tree to rotate
* Return: pointer to new root
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->right;
	if (tree->right)
	{
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}
	return (tree);
}
