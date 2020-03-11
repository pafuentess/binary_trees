#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL || binary_tree_is_leaf(tree))
        return (0);
    else
        return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}
