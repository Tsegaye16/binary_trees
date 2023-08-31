#include "binary_trees.h"

/**
 * bst_search - is the function used to search the given
 *	node from th BST
 * @tree: is a pointer to the root node of the BST to search
 * @value: is the value to search in the tree
 * Return: pointer to the node containing a value equals to value
 *	NULL on failure
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current = (bst_t *)tree;

	if (tree == NULL)
		return (NULL);
	while (current)
	{
		if (current->n == value)
			return (current);
		else if (current->n > value)
			current = current->left;
		else
			current = current->right;
	}
	return (NULL);
}
