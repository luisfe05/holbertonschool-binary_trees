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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = tree->left ? (int)tree_height(tree->left) + 1 : 0;
	right = tree->right ? (int)tree_height(tree->right) + 1 : 0;

	return (left - right);
}
