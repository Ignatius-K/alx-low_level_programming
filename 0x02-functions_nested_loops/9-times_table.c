#include "main.h"

/**
 * times_table - prints times table of 9
 *
 * Description: Prints the time table of 9*9
 *
 * Return: None
 */

void times_table(void)
{

	int i;
	int j;
	int pdt;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pdt = i * j;

			if (j != 0)
				_putchar(32);
			if (pdt <= 9)
			{
				if (j != 0)
					_putchar(32);
				_putchar('0' + pdt);
			}

			else
			{
				_putchar('0' + ((pdt - (pdt % 10)) / 10));
				_putchar('0' + pdt % 10);
			}

			if (j != 9)
				_putchar(44);

		}

		_putchar('\n');
	}

}
