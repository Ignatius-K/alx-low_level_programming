#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int rem;

	for (i = 0; i <= 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + 1);
			}

				rem = j % 10;
				_putchar('0' + rem);
		}


		_putchar('\n');
	}
}
