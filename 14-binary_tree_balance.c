#include "binary_trees.h"

/**
 * binary_tree_balance - difference between left and right subtree nodes
 * @tree: pointer to the node
 *
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int left_height = 0, right_height = 0;

		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);

		return (left_height - right_height);
	}
	return (0);
}
