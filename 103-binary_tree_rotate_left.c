#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Perform a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *doll, *tmp, *temp;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	doll = tree->right;

	tmp = doll->left;
	doll->left = tree;
	tree->right = tmp;

	if (tmp)
		tmp->parent = tree;

	temp = tree->parent;
	tree->parent = doll;
	doll->parent = temp;

	if (temp)
	{
		if (temp->right == tree)
			temp->right = doll;
		else
			temp->left = doll;
	}

	return (doll);
}
