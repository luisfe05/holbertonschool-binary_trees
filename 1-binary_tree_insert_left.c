#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	/* Create the new node */
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	/* If parent already has a left child, move it down */
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	/* Set new node as left child of parent */
	parent->left = new;

	return (new);
}
