#include "binary_trees.h"

/**
 * binary_tree_levelorder - is the function used to travers the
 *	the tree level-order
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level, max_level;

	if (tree == NULL && func == NULL)
		return;
	max_level = binary_tree_height(tree);
	for (level = 1; level < max_level; level++)
		btlo_helper(tree, func, level);
}
/**
 * btlo_helper - a function used to traverse a node'value accordingly
 * @tree: tree to be traverse
 * @func: is a pointer to a function to call for each node
 * @level: the level of node
 */
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		btlo_helper(tree->left, func, level - 1);
		btlo_helper(tree->right, func, level - 1);
	}
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
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_height > right_height ? left_height : right_height);
}
