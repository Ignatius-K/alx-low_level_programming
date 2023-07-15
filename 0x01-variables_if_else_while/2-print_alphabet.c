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
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
