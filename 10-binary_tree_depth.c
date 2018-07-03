#include "binary_trees.h"
/**
 * binary_tree_depth - finds the height of a binary tree
 * @node: pointer to root node
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node->parent)
		while (node->parent)
		{
			depth += 1;
			node = node->parent;
		}
	return (depth);
}
