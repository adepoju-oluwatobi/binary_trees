#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 * @parent: a pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: pointer to new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);
	while (1)
	{
		root->left = NULL;
		root->right = NULL;
		root->n = value;
		root->parent = parent;

		return (root);
	}
}
