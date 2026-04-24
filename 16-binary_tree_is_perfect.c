#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + tree_height(tree->left) : 0;
	right = tree->right ? 1 + tree_height(tree->right) : 0;

	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);

	/* A leaf is perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Node with one child is not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	/* Heights must be equal and both subtrees must be perfect */
	if (left_h != right_h)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
