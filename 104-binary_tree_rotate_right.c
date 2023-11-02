#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Perform a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new_root = tree->left;
	tmp = new_root->right;

	new_root->right = tree;
	tree->left = tmp;

	return (new_root);
}
