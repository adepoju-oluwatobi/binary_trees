#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the new node
 *
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *first_node;

	first_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (first_node == NULL)
		return (NULL);

	first_node->parent = parent;
	first_node->n = value;
	first_node->right = NULL;

	if ((parent->left) == NULL)
	{
		(parent->left)->parent = first_node;
		first_node->left = parent->left;
		parent->left = first_node;
	}
	return (first_node);
}
