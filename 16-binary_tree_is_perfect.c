#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree) == 1)
        return 1;
    return 0;
}
