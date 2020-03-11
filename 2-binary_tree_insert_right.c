#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: parent node
* @value: value for the new node
* Return: the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	if (parent->right == NULL)
		parent->right = new;
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
	}
	return (new);
}
