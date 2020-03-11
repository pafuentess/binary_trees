#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_is_perfect - checks if a binary tree is perfect.
* @tree: pointer to the root node of the tree to check
* Return: If tree is NULL, your function must return 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
<<<<<<< HEAD
		return 0;
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
		return 1;
	return 0;
=======
		return (0);
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
		return (1);
	return (0);
>>>>>>> d75dce6d6ab8e80967a0f0e8e8552c31de3ed917
}
