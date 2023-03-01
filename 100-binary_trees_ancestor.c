#include "binary_trees.h"

/**
* binary_trees_ancestor - find the lowest commont ancestor
* @first: the first descendant
* @second: the second descendant
* Return: their lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	while (first->parent && second->parent)
	{
		if (first->parent == second->parent)
			return (first->parent);
		if (first == second->parent)
			return (second->parent);
		if (first->parent == second)
			return (first->parent);
		first = first->parent;
		second = second->parent;
	}
	return (0);
}
