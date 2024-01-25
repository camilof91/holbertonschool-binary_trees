#include "binary_trees.h"

/**
 * c_height - Recursively calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * @height: Current height of the subtree.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t c_height(const binary_tree_t *tree, size_t height)
{
	size_t left;
	size_t right;

	left = height;
	right = height;

	if (tree == NULL)
		return (0);

	left = left + c_height(tree->left, height);
	right = right + c_height(tree->right, height);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	
	if (tree == NULL)
		return (0);
	height = 0;
	height = c_height(tree, height);
	return (height - 1);
}
