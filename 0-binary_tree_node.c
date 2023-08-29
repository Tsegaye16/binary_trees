#include "binary_trees.h"
/**
 * binary_tree_node : creates the binary tree node
 * @parent : pointer of the parent node
 * @value : values of newly created node
 *
 * Return :newly created node
 *	NULL on failer
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->parent = parent;
	return (NULL);
}
