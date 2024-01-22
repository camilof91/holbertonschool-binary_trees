#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to put in the new node
 *
 * Description:
 * - Allocates memory for a new binary tree node and initializes its values.
 *
 * @parent: Parent node of the new node.
 * @value: Integer value to be stored in the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the values of the new node */
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;

	return (new_node);
}
