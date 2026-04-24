#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse left subtree first */
	binary_tree_inorder(tree->left, func);

	/* Then visit current node */
	func(tree->n);

	/* Then traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
