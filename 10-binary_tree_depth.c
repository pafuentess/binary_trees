#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: node to check
* Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int cont = 0;

	while (tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
