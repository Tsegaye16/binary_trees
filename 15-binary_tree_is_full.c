#include "binary_trees.h"

/**
 * binary_tree_is_full - is a function used to check whether
 *	a tree is full or not
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full
 *	other wise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right));
	return (0);
}
