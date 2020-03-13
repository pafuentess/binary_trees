#include "binary_trees.h"
/**
* binary_tree_rotate_right - performs a right-rotation on a binary tree
* @tree: node to rotate
* Return: the new root
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		return (tree->parent);
	}
	return (tree);
}
