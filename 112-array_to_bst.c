#include "binary_trees.h"
/**
 * array_to_bst - a function used to for BST from array
 * @array: is a pointer to the first element of the array to be converted
 * @size: is the number of element in the array
 *
 * Return: newly formed BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root;
	unsigned int k;

	for (k = 0; k < size; k++)
		bst_insert(&root, array[k]);
	return (root);

}
