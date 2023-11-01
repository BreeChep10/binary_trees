#include "binary_trees.h"


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafy = 0;

	if (tree)
	{
		leafy += (!tree->left && !tree->right) ? 1 : 0;
		leafy += binary_tree_leaves(tree->left);
		leafy += binary_tree_leaves(tree->right);
	}

	return (leafy);
}
