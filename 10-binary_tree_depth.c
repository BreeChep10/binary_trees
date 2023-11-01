#include "binary_trees.h"

/**
 * binary_tree_depth - Func that measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: Return 0 if tree NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree || !tree->parent)
		{
			return (0);
		}
		else
		{
			return (1 + binary_tree_depth(tree->parent));
		}
	}
	return (0);
}
