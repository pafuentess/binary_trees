#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: node to check
* Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int cont = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: first node
* @second: second node
* Return: the lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *ftemp = (binary_tree_t *)first, *stemp;

	if (first == NULL || second == NULL)
		return (NULL);

	while (ftemp)
	{
		stemp = (binary_tree_t *)second;
		while (stemp)
		{
			if (ftemp == stemp)
				return (ftemp);
			stemp = stemp->parent;
		}
		ftemp = ftemp->parent;
	}
	return (NULL);
}
