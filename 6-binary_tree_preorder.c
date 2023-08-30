#include "binary_trees.h"

/**
 * binary_tree_preorder - the mthod that displays
 *	the tree in preorder
 * @func: is a pointer to a function to call for each node
 * @tree: is a pointer to the root node of the tree to traverse
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
