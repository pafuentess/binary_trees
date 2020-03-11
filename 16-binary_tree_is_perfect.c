#include "binary_trees.h"
#include <stdio.h>
/**
* binary_tree_height - measures the height of a binary tree
* @tree: node to check
* Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0;
	int rheight = 0;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (1 + lheight);
	return (1 + rheight);
}

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
* _pow_recursion - exponential function
* @x: base factor
* @y: exponent
* Return: int the exponential number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, (y - 1))));
}

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
* binary_tree_is_perfect - checks if a binary tree is perfect.
* @tree: pointer to the root node of the tree to check
* Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes_expected = 0, height = 0, real_nodes = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes_expected = _pow_recursion(2, height) - 1;
	real_nodes = binary_tree_size(tree);
	if (nodes_expected == real_nodes)
		return (1);
	return (0);
}
