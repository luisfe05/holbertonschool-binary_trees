#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	/* Create the new node */
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/* If parent already has a right child, move it down */
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}

	/* Set new node as right child of parent */
	parent->right = new;

	return (new);
}
