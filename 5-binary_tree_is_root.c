#include "binary_trees.h"

/**
 * binary_tree_is_root - the method that check whether the
 *	node is root or not
 * @node: the node to be checked
 *
 * Return: 1 if the node is root
 *	0 if the node is not root
 *	0 if the node is NULL:
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return ((node->parent) ? 0 : 1);
}
