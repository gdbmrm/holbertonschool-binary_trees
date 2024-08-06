#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t result = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Calculate size recursively +1 for the root node*/
	result = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);

	return (result);
}
