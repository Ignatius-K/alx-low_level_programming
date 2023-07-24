#include "main.h"

/**
 * puts2 - prints other character
 * @s: string to reverse
 */
void puts2(char *s)
{

	int n, j;

	for (n = 0; s[n] != '\0'; n++)
	{

	}

	for (j = 0; j < n; j++)
	{
		if (j % 2 != 1)
		{
			_putchar(s[j]);
		}
	}

	_putchar('\n');

}
