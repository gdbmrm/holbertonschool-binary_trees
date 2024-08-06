#include "binary_trees.h"
#include <stdio.h>
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t depth_right = 0, depth_left = 0;

    if (tree == NULL)
    {
        return (0);
        printf("nul");
    }

    depth_right = binary_tree_depth(tree->right);
    depth_left = binary_tree_depth(tree->left);

    if (depth_right != depth_left)
    {
        return (0);
        printf("%ld", depth_right);
        printf("%ld", depth_left);
    }
    
    return (1);
    printf("parfait");
    
}
