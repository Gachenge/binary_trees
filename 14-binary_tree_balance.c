#include "binary_trees.h"

/**
* binary_tree_height - function to calculate the height of the tree
* @tree: the root of the tree
* Return: true or false
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);

	hl = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	hr = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((hl > hr) ? hl : hr);
}


/**
* binary_tree_balance - check if a binary tree is balanced
* @tree: the pointer to the root node
* Return: true or false
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
