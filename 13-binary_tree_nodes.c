#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least 1 child. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count, count = 0;
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		count = 1;
	}

	result = (left_count + right_count + count);

	return (result);
}
