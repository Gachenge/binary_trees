#include "binary_trees.h"

/**
* binary_tree_depth - calculate the depth of a node in a binary tree
* @tree: the parent node
* Return: the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->left)
	{
		tree = tree->left;
		depth++;
	}
	return (depth);
}

/**
* isPerfectTree - recursive function to check if its a perfect tree
* @tree: the root node
* @level: the level to check
* @d: the depth
* Return: tru or false
*/

int isPerfectTree(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (isPerfectTree(tree->left, d, level + 1) &&
		isPerfectTree(tree->right, d, level + 1));
}

/**
* binary_tree_is_perfect - check if binary tree is perfect
* @tree: the root node
* Return: true or false
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = binary_tree_depth(tree);

	return (isPerfectTree(tree, d, 0));
}
