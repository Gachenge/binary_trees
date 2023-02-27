#include "binary_trees.h"

/**
* binary_tree_is_root - check if the node is the root node
* @node: the node to check
* Return: true or false
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
