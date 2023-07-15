#include <stdio.h>

/**
 * main - alphabets
 *
 * Description: This prints alphabets in lower case
 *
 * Return: 0 everytime
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	putchar('\n');

	return (0);
}
