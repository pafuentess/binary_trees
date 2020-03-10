#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if(new == NULL)
        return (NULL);
    new->left = NULL;
    new->right = NULL;
    new->n = value;
    if(parent == NULL)
        new->parent = NULL;
        return (new);
    else
        new->parent = parent;
    if (parent->n < value)
        parent->left = new;
    else if(parent->n > value)
        parent->right = new;
    return (new);

}