#include "binary_trees.h"
/**
* binary_tree_leaves - Write a function
* that counts the leaves in a binary tree
* @tree: is a pointer to the root node
* of the tree to count the number of leaves
* Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right != NULL)
	{
		child++;
	}
	if (tree->left != NULL)
	{
		child++;
	}
	return (child);
}
