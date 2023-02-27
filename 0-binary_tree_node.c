#include "binary_trees.h"

/**
* binary_tree_node - create a new node on a binary tree
* @parent: the root node
* @value: the value of the new node
* Return: the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
