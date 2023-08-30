#include "binary_trees.h"

/**
 * binary_tree_height - the method that calculates
 *	the height of binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 *	0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (1 + (right_height > left_height ? right_height : left_height));
}
