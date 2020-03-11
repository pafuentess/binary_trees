#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int lheight, rheight;

    if (tree == NULL)
        return (0);
    if (binary_tree_is_leaf(tree))
        return (1);

    lheight = binary_tree_is_full(tree->right);
    rheight = binary_tree_is_full(tree->left);
    if (lheight == 0 || rheight == 0)
        return (0);
    return (1);
}
