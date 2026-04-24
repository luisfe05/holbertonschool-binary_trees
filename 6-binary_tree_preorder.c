#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Visit current node first */
	func(tree->n);

	/* Then traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* Then traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
