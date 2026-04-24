#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle of
 *
 * Return: pointer to the uncle node, or NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Uncle is the sibling of the parent */
	return (binary_tree_sibling(node->parent));
}
