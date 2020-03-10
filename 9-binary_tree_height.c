#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t lheight;
    size_t rheight;

    if (tree == NULL)
        return 0;
    lheight = binary_tree_height(tree->left);
    rheight = binary_tree_height(tree->right);

    if (lheight > rheight)
        return (lheight + 1);
    return (rheight + 1);
}