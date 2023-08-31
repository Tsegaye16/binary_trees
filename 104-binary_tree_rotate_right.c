#include "binary_trees.h"
/**
 * binary_tree_rotate_right - is the function used to rotate
 *	the given tree to right side
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: right rotated tree
 *	otherwise NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent;

	if (tree == NULL && tree->left == NULL)
		return (NULL);
	temp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;
	if (tree->right)
	{
		temp->left = tree->right;
		tree->right->parent = temp;
	}
	else
		temp->left = NULL;
	temp->parent = tree;
	tree->right = temp;
	if (parent)
		parent->left = tree;
	tree->parent = parent;
	return (tree);
}
