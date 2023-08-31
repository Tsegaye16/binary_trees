#include "binary_trees.h"

/**
 * binary_tree_uncle - is the function used to get the
 *	uncle node of the givent node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 *	other wise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
