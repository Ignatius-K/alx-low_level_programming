#include "main.h"

/**
 * print_rev - prints reverse
 * @s: string to reverse
 */
void print_rev(char *s)
{

	int n, j;

	for (n = 0; s[n] != '\0'; n++)
	{

	}

	for (j = 0; j < n; j++)
	{
		_putchar(s[n - 1 - j]);
	}

	_putchar('\n');

}
