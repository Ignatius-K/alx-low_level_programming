#include "main.h"

/**
 * print_diagonal - print line diagonal
 * @n: number of slashes to print
 * Description: if n is less than 1
 * print new line and stop
 */

void print_diagonal(int n)
{

	int i;
	int j;

	if (n <= 0)
	{

		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');

		}

	}

}

