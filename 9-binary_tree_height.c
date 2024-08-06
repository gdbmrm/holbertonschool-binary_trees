#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If the tree is NULL, the height is 0 */
	if (tree == NULL)
		return (0);

	/* Measure the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Measure the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* The height of the tree is the greater of the two subtree heights plus 1 */
	if (left_height > right_height)
		return (left_height + 1);

	else
		return (right_height + 1);
}
