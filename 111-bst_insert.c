#include "binary_trees.h"

/**
 * bst_insert - is the function used to insert the
 *	given node at apropriate position
 * @tree: is a double pointer to the root node of the BST to insert the value
 * @value: is the value to store in the node to be inserted
 *
 * Return: binary search tree that has a newly inserted node
 *	NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp, *second, *new_node;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	temp = *tree;
	while (temp)
	{
		second = temp;
		if (value < temp->n)
			temp = temp->left;
		else if (value > temp->n)
			temp = temp->right;
		else if (value == temp->n)
			return (NULL);
	}

	new_node = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new_node;
	else if (value < second->n)
	{
		second->left = new_node;
		new_node->parent = second;
	}
	else
	{
		second->right = new_node;
		new_node->parent = second;
	}

	return (new_node);
}
