#include "binary_trees.h"

/**
* binary_tree_uncle - function to find the uncle of a node
* @node: the node to check for
* Return: the uncle of the node
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (0);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
