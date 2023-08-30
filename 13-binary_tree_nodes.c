#include "binary_trees.h"

/**
 * binary_tree_nodes - the function to get the node
 *	that have atleast one child-node
 * @tree: is a pointer to the root node of the tree
 *	to count the number of nodes
 *
 * Return: the number of nodes with one child
 *	0 if the tree is NULL or no child node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
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
 * binary_tree_leaves - the function to find the
 *      number of leave node of a tree
 * @tree: is a pointer to the root node of the tree
 *      to count the number of leaves
 *
 * Return: number of leave node
 *      0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
