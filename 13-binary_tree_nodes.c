#include "binary_trees.h"

/**
 * binary_tree_nodes - func that counts nodes with at least 1 child
 * @tree: a pointer to the root node of the tree to count the no of nodes
 * Return: if a tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);

	if (tree->left != NULL)
		return (binary_tree_nodes(tree->left) + 1);
	if (tree->right != NULL)
		return (binary_tree_nodes(tree->right) + 1);

	return (0);
}
