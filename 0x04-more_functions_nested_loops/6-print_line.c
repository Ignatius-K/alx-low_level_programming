#include "main.h"

/**
 * print_line - print lines
 * @n: number of underscores to print
 * Description: if n is less than 1
 * print new line and stop
 */

void print_line(int n)
{

	int i;

	if (n < 0)
	{

		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}

}
