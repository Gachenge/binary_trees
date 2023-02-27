#include "binary_trees.h"

/**
* binary_tree_preorder - traverse a binary tree using preopeder
* @tree: thr pointer to the root node
* @func: pointer to the function to be executed
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
