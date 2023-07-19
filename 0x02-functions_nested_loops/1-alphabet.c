#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * @void - takes no arguments
 *
 * Return: returns no value
 */
void print_alphabet(void)
{
	for (int i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
