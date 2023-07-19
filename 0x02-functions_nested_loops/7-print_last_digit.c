#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit of number
 *
 * @n: integer whose last digit is returned
 *
 * Return: last digit of n
 */
int print_last_digit(int n)
{

	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
	}

	else
	{
		if (n < 0)
			n = -n;

		last_digit = n % 10;
	}

	_putchar('0' + last_digit);
	return (last_digit);

}
