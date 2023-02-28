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

	hl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	hr = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((hl > hr) ? hl : hr);
}
