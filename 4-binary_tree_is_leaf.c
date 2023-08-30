#include "binary_trees.h"
/**
 * binary_tree_is_leaf - the method that is check whether
 *	the given node is leaf or not
 * @node: the node to be checked
 *
 * Return: 0- if node is not leaf
 *	1 - if node is leafe
 *	0 - if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((node->left || node->right) ? 0 : 1);
}
