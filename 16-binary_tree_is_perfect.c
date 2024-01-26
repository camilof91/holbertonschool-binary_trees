#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right;
	int left;
	int size;

	if (tree == NULL)
		return (0);
	size = 0;
	left = height(tree->left, size);
	right = height(tree->right, size);

	if (right != left)
		return (0);
	if (right < 0 || left < 0)
		return (0);
	return (1);
}

/**
 * height - Recursive function to calculate the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 * @size: Current size of the subtree.
 *
 * Return: Height of the tree. Return -1 if the tree is not perfect.
 */
int height(const binary_tree_t *tree, int size)
{
	int right;
	int left;

	left = size;
	right = size;

	if (tree == NULL)
		return (0);

	left = left + height(tree->left, left);
	right = right + height(tree->right, right);

	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (-1);
	if (right < 0 || left < 0)
		return (-1);
	if (left != right)
		return (-1);
	return (right + 1);
}
