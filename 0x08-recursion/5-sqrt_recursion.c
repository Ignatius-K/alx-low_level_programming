#include "main.h"

/**
 * is_square - checks whether it is square
 * @root: acts as reference
 * @square: no. whose root is required
 *
 * Return: root
 */
int is_square(int root, int square)
{
	if (root == 1 || root < 1)
		return (1);
	if (root * root == square)
		return (root);
	return (1 * is_square(root - 1, square));
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

	d = is_square(n, n);
	if (d == 1 && n != 1)
		return (-1);
	return (d);
}


