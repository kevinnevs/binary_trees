#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: a pointer to the root node of tree to measure height
 * Return: if tree is NULL, function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (depth);

	depth = binary_tree_depth(tree->parent) + 1
	return (depth);
}
