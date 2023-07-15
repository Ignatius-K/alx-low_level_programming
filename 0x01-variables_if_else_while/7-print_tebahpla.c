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

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
