#include "main.h"

/**
 * print_triangle - print striangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(32);
			}

			for (j = 1; j <= i; j++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}





