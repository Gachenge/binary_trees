#include "binary_trees.h"

/**
* binary_tree_sibling - find the sibling node
* @node: the node
* Return: the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *new;

	if (!node || !node->parent)
		return (0);
	new = node->parent;
	if (new->right != node)
		return (new->right);
	else if (new->left != node)
		return (new->left);
	return (0);
}
