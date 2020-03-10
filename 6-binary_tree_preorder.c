#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - creates a binary tree node.
 *
 *
 * Return: Always 0.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
