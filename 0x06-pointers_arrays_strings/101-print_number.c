#include "main.h"

/**
 * print_number - prints number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	int n_of_digits, i, j, divisor, digit;
	unsigned int num;

	/* gets digits of the number */
	n_of_digits = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	else if (n == 0)
	{
		n_of_digits = 1;
	}
	num = n;
	while (num > 0)
	{
		num = num / 10;
		n_of_digits++;
	}
	for (i = n_of_digits; i > 0; i--)
	{
		j = i - 1;
		divisor = 1;
		while (j > 0)
		{
			divisor *= 10;
			j--;
		}
		digit = n / divisor;
		_putchar('0' + digit);
		n = n - (digit * divisor);
	}
}
