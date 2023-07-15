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

	for (i = 0; i <= 15; i++)
	{
		if (i <= 9)
			putchar('0' + i);
		else
			putchar(i + 87);
	}

	putchar('\n');

	return (0);
}
