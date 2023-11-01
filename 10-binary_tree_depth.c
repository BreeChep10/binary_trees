#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		return (tree && tree->parent? 1 + binary_tree_depth(tree->parent): 0);
	}
	return (0);
}