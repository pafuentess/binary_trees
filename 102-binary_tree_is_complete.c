#include "binary_trees.h"
#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
* @tree: node to check
* Return: size of tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: parent node
* Return: 1 or 0
*/
int complete(const binary_tree_t *tree, int n_nodes, int index)
{
	if (tree == NULL)
		return (1);
	if (index >= n_nodes)
		return (0);

	return (complete(tree->left, n_nodes, 2 * index + 1),
	complete(tree->right, n_nodes, 2 * index + 2));
}
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: parent node
* Return: 1 or 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int n_nodes = 0;

	if (tree == NULL)
		return (0);
	n_nodes = binary_tree_size(tree);
	if (complete(tree, n_nodes, 0))
		return (1);
	return (0);
}
