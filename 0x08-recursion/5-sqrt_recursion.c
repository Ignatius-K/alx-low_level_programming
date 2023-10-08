#include "main.h"
#include <stdio.h>

/**
 * is_square - checks whether it is square
 * @root: acts as reference
 * @square: no. whose root is required
 *
 * Return: root
 */
int is_square(int root, int square)
{

	if (root * root == square)
		return (root);
	if (root * root > square)
		return (-1);
	return (is_square(root + 1, square));
}

/**
 * _sqrt_recursion - gets square root of number
 * @n: number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int d;

	d = is_square(1, n);
	if (d == 1 && n != 1)
		return (-1);
	return (d);
}


