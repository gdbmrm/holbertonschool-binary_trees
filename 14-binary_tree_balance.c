#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures
 * the height of a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: The height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}

	else
	{
		return (right_height + 1);
	}
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r = 0, height_l = 0;

	height_r = binary_tree_height(tree->right);
	height_l = binary_tree_height(tree->left);

	return (height_r - height_l);

}