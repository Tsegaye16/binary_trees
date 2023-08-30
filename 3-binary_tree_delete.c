#include "binary_trees.h"

/**
 * binary_tree_delete - the method that deletes the
 *	entire binary tree
 * @tree: a binary tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
