#include "binary_trees.h"

/**
 * binary_tree_is_perfect - is the function used to check
 *	the tree is perfect or not
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: 1 if the tree is perfect
 *	otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, tree_size, expected_node;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	height = binary_tree_height(tree);
	tree_size = binary_tree_size(tree);
	expected_node = (int)_pow_recursion(2, height + 1);
	return (expected_node - 1 == tree_size);
}

/**
 * binary_tree_size - the method that calculate the
 *      size of the binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: size of tree
 *      0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
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
	size_t left_height;
	size_t right_height;

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@permanent: the value to exponentiate(2)
 *@height: the power to raise permanent to
 *Return: permanent to the power of height,
 *	or -1 if height is negative
 */

int _pow_recursion(int permanent, int height)
{
	if (height < 0)
		return (-1);
	if (height == 0)
		return (1);
	else
		return (permanent * _pow_recursion(permanent, height - 1));
}
