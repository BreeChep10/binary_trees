#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: falses if node is null.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (true);
	}
	return (false);
}
