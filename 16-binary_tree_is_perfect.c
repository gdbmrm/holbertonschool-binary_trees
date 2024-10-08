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
/**
* binary_tree_is_perfect - Write a function
* that checks if a binary tree is perfect
* @tree:  is a pointer to the root node of the tree to check
* Return: 1 if is perfect else 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_right = 0, height_left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);

	if (height_left != height_right)
	{
		return (0);
	}

	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL &&
		binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right)))
	{
		return (1);
	}
	return (0);
}
