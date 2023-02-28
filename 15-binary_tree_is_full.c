#include "binary_trees.h"

/**
* binary_tree_is_full - check if a binary tree is full
* @tree: the pointer to the root node
* Return: if true or false
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
