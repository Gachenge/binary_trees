#include "binary_trees.h"

/**
* binary_tree_size - function to measure the size of a binary tree
* @tree: the pointer to the root node
* Return: the size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	hl = binary_tree_size(tree->left);
	hr = binary_tree_size(tree->right);

	return ((hr + hl) + 1);
}
