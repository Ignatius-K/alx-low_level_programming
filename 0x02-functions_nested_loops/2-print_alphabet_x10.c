#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * @void - doesnt take any arg
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int count;
	int inner_count;

	for (count = 0; count < 10; count++)
	{

		for (inner_count = 97; inner_count < 123; inner_count++)
		{
			_putchar(inner_count);
		}

		_putchar('\n');

	}


}
