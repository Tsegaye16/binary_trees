#include "binary_trees.h"

/**
 * binary_trees_ancestor - is the function used to get lowest
 *	common ancestor of two node
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 *
 * Return: lowest common ancestor of two node
 *	otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	int first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth = first_depth - 1;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth = second_depth - 1;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)second);
		second = second->parent;
		first = first->parent;
	}
	return ((binary_tree_t *)second);
}

/**
 * binary_tree_depth - a method to calculate the depth
 *      of the given node
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: depth of the tree
 *      0 if the tree is empty
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
