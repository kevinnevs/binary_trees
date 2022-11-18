#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts node on left-child
 * @parent: a pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: 0 on success
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		/** attach current left pointer to new **/
		parent->left->parent = new;

		/** make new left connection **/
		new->left = parent->left;
	}

	/** connect current left to current parent **/
	parent->left = new;

	return (new);
}
