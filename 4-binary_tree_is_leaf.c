#include "binary_trees.h"

/**
* binary_tree_is_leaf - Write a function that checks if a node is a leaf
* @node: node to check if is a leaf
* Return:  1 if node is a leaf, otherwise 0
* If node is NULL, return 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	return (0);

}
