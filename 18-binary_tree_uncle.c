#include "binary_trees.h"
/**
* binary_tree_uncle - Write a function that finds the uncle of a node
* @node: node to find the uncle
* Return: uncle of node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL || node->parent->parent->right == NULL
	|| node->parent->parent->left == NULL)
	{
		return (NULL);
	}

	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);

	} else if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	return (NULL);
}
