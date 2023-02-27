#include "binary_trees.h"

/**
* binary_tree_is_leaf - check if a node is a leaf or has children
* @node: the node to check
* Return: true or false
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
