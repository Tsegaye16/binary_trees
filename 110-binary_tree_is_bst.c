#include "binary_trees.h"

/**
 * binary_tree_is_bst - the function that checks if a binary
 *	tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST
 *         0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (BSThelper(tree, INT_MIN, INT_MAX));
}

/**
 * BSThelper - is  functio th checks if a binary tree
 *	is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * @min: Lower bound of checked nored
 * @max: Upper bound of checked nodes
 *
 * Return: 1 if tree is a valid BST
 *         0 otherwise
 */
int BSThelper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n > max || tree->n < min)
		return (0);
	return (BSThelper(tree->left, min, tree->n - 1)
			&& BSThelper(tree->right, tree->n + 1, max));
}
