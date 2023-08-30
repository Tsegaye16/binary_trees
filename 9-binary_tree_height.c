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
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) :  0;
	right_height = tree->right ? 1+ binary_tree_height(tree->right) : 0;

	return (right_height > left_height ? right_height : left_height);
}
