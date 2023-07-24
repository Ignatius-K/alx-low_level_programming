#include "main.h"

/**
 *	puts_half - print half string
 *	@str: string
 */

void puts_half(char *str)
{
	int n;
	int j;

	n = 0;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		for (j = n / 2; j < n; j++)
		{
			_putchar(str[j]);
		}
	}

	else
	{
		for (j = (n - 1) / 2; j < n; j++)
		{
			_putchar(str[j]);
		}
	}

	_putchar('\n');
}








