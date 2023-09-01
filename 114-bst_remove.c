#include "binary_trees.h"

/**
 * bst_remove - is the function used to remove the
 *	given node from BST
 * @root: is a pointer to the root node of the tree
 *	where you will remove a node
 * @value: is the value to remove in the tree
 *
 * Return: updated version of BST
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		temp = bst_min_val(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}

/**
 * bst_min_val - finds the smallest node from a Binary Search Tree
 * @root: a pointer to the root node of the tree
 * Return: a pointer to the smallest node
 */
bst_t *bst_min_val(bst_t *root)
{
	bst_t *current = root;

	while (current->left)
		current = current->left;
	return (current);
}
