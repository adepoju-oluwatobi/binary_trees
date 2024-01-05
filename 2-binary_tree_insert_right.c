#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right child node
 * @parent: pointer to the node to insert
 * @value: value to store in the new node
 *
 * Return: pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *second_node, *node;

	second_node = malloc(sizeof(binary_tree_t));

	if (second_node == NULL)
		return (NULL);

	second_node->left = NULL;
	second_node->right = NULL;
	second_node->n = value;

	if (parent->right == NULL)
	{
		parent->right = second_node;
		second_node->parent =  parent;
	}
	else
	{
		parent->right = node;
		parent->right = second_node;
		second_node->parent = parent;
		second_node->right = node;
		node->parent = second_node;
	}
	return (second_node);
}
