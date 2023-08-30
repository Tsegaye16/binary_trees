#include "binary_trees.h"

/**
 * binary_tree_balance - the function that find
 *	balance facrot of a tree
 * @tree: is a pointer to the root node of the
 *	tree to measure the balance factor
 *
 * Return: factoring balance of  a tree
 *	0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right_height = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (left_height - right_height);
}

/**
 * binary_tree_height - the method that calculates
 *      the height of binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 *      0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
