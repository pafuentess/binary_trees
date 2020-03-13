#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree);

/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: parent node
* Return: 1 or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
* print_level - function to print
* @tree: pointer to tree
* @level: level to print
* @func: function to print
*/

void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{

	if (tree == NULL)
		return;

	if (binary_tree_depth(tree) == level)
	{
		func(tree->n);
		return;
	}
	else
		print_level(tree->left, level, func);
		print_level(tree->right, level, func);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (lheight >= rheight)
		return (1 + lheight);
	return (1 + rheight);
}

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: node to check
* Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int cont = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		cont++;
		tree = tree->parent;
	}
	return (cont);
}

/**
* binary_tree_levelorder - function that goes through
* a binary tree using level-order traversal
* @tree: pointer to tree
* @func: function to print
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level = 0, i;

	if (tree == NULL || func == NULL)
		return;

	level = binary_tree_height(tree);

	for (i = 0 ; i <= level ; i++)
		print_level(tree, i, func);
}
