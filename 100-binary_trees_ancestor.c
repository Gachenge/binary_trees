#include "binary_trees.h"

/**
* binary_trees_ancestor - find the lowest commont ancestor
* @first: the first descendant
* @second: the second descendant
* Return: their lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	if (!first || !second)
		return (0);
	if (first == second)
		return ((binary_tree_t *) first);

	if (first == second->parent || !first->parent)
		return (binary_trees_ancestor(first, second->parent));

	if (second == first->parent || !second->parent)
		return (binary_trees_ancestor(second, first->parent));

	return (binary_trees_ancestor(first->parent, second->parent));
}
