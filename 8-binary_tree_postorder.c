#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree first */
	binary_tree_postorder(tree->left, func);

	/* Then traverse right subtree */
	binary_tree_postorder(tree->right, func);

	/* Then visit current node last */
	func(tree->n);
}
