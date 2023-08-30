#include "binary_trees.h"

/**
 * binary_tree_depth - a method to calculate the depth
 *	of the given node
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth of the tree
 *	0 if the tree is empty
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth = depth + 1;
		tree = tree->parent;
	}
	return (depth);

}
