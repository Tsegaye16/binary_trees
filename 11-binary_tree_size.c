#include "binary_trees.h"

/**
 * binary_tree_size - the method that calculate the
 *	size of the binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree
 *	0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
