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
* binary_tree_is_leaf - checks if a node is a leaf
* @node: parent node
* Return: 1 or 0
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	int i = 0, j = 0, maxf = 0, maxs = 0;
	binary_tree_t *temp, **fpath, **spath;

	if (first == NULL || second == NULL)
		return (NULL);
	maxf = binary_tree_depth(first) + 1, maxs = binary_tree_depth(second) + 1;
	fpath = malloc(sizeof(binary_tree_t) * maxf);
	if (fpath == NULL)
		return (NULL);
	spath = malloc(sizeof(binary_tree_t) * maxs);
	if (spath == NULL)
		return (NULL);
	temp = (binary_tree_t *)first;
	while (temp)
	{
		fpath[i] = temp;
		i++;
		temp = temp->parent;
	}
	temp = (binary_tree_t *)second;
	while (temp)
	{
		spath[j] = temp;
		j++;
		temp = temp->parent;
	}
	j = 0;
	for (i = 0; i <= maxf; i++)
	{
		for (j = 0; j <= maxs; j++)
		{
			if (fpath[i] == spath[j])
			{
				return (fpath[i]);
			}
		}
	}
	return (NULL);
}
