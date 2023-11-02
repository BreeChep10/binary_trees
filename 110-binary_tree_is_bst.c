#include "binary_trees.h"

/**
 *binary_tree_is_bst - checks if a binary tree is BST
 *@tree: the tree to verify for BST
 *Return: 1 if tree is BST else 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree)
		return (love_BTS(tree, INT_MIN, INT_MAX));
	return (0);
}


/**
 *love_BTS - a helper function to check of BST tree
 *@tree: the tree to verify if BST
 *@low_k: the minumum int
 *@high_k: the maximum int
 *Return: 1 if tree is BST else 0
 */

int love_BTS(const binary_tree_t *tree, int low_k, int high_k)
{
	if (!tree)
		return (1);

	if (tree->n < low_k || tree->n > high_k)
	{
		return (0);
	}


	return (love_BTS(tree->left, low_k, tree->n - 1) &&
		love_BTS(tree->right, tree->n + 1, high_k));


}
