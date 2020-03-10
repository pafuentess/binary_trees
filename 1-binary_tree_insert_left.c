#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	
	if (parent == NULL)
		return (NULL);
    	new = malloc(sizeof(binary_tree_t));
	if(new == NULL)
        	return (NULL);
	new->left = NULL;
    	new->right = NULL;
    	new->n = value;
	new->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->left->parent = new;
		return (new);
	}
}
