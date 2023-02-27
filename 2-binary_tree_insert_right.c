#include "binary_trees.h"

/**
* binary_tree_insert_right - insert a new node to the left in a binary tree
* @parent: the parent node
* @value: the value of the new node
* Return: the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);

	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
