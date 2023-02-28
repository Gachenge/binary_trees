#include "binary_trees.h"

/**
* binary_tree_depth - calculate the depth of a node in a binary tree
* @tree: the parent node
* Return: the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
