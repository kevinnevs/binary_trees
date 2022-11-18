#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts node as right-child
 * @parent: pointer to the node to insert the right-child
 * @value: the value to store in the new node
 * Return: 0 if successfull
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		/** attach current right pointer to new**/
		parent->right->parent = new;

		/** make new right connection**/
		new->right = parent->right;
	}

	/** connect current right to current parent **/
	parent->right = new;

	return (new);
}
