#include "binary_trees.h"

/**
 * binary_tree_insert_left : the method that inserts new_node
 *	of the parent node
 * @parent : a pointer points to tha parent node of new_node
 * @value : the values of newly created node
 *
 * Return :new_node
 *	NULL on failer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;
	return (new_node);
}
