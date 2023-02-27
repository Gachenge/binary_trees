#include "binary_trees.h"

/**
* binary_tree_height - function to calculate the height of the tree
* @tree: the root of the tree
* Return: true or false
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t hl = -1, hr = -1;

    if (!tree)
        return (0);

    else
    {
        hl = binary_tree_height(tree->left);
        hr = binary_tree_height(tree->right);

        if (hl >= hr)
            return (hl + 1);
        else
            return (hr + 1);
    }
}
