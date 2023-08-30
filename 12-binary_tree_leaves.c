#include "binary_trees.h"

/**
 * binary_tree_leaves - the function to find the
 *	number of leave node of a tree
 * @tree: is a pointer to the root node of the tree
 *	to count the number of leaves
 *
 * Return: number of leave node
 *	0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
