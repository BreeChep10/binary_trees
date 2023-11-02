#include "binary_trees.h"

/**
 *binary_tree_ancestor - finds a common parent between
 *two nodes else returns null of no common parent is found
 *
 *@first: the first node
 *@second: the second node
 *Return: the common parent node else NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *mom1, *mom2;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	mom1 = first->parent;
	mom2 = second->parent;


	if (!mom1 || first == mom2 || (!mom1->parent && mom2))
		return (binary_trees_ancestor(first, mom2));
	else if (!mom2 || second == mom1 || (!mom2->parent && mom1))
		return (binary_trees_ancestor(mom1, second));
	return (binary_trees_ancestor(mom1, mom2));
}
