#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
	int cont = 0;

	while(tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}
