#include "binary_trees.h"

/**
* binary_tree_nodes - count all nodes with at least one child
* @tree: the pointer to the root node
* Return: the number of parents
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leav = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		leav += binary_tree_nodes(tree->left);
		leav += binary_tree_nodes(tree->right);
		leav++;
	}
	return (leav);
}
