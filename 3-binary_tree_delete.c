 "binary_trees.h"

/**
*
*binary_tree_delete - runs through the tree and removes it from the leaves
*@tree: its a pointer whit structur of binary tree
*
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
