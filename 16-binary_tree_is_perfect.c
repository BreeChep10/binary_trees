#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	return (tree->left && tree->right &&
			binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			height == 0);
}

/**
 * binary_tree_height - Calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

