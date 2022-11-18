#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	if (temp != NULL)
	{
		if (parent != NULL)
			temp->parent = parent;
		else
			temp->parent = NULL;
		temp->left = NULL;
		temp->right = NULL;
		temp->n = value;
	}

	return (temp);
}
