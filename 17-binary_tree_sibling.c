#include "binary_trees.h"

/**
 * binary_tree_sibling - is the function used to get
 *	the sibling of the given node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *	otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->right)
		return (node->parent->left);
	return (node->parent->left);
}
