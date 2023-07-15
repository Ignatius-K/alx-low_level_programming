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

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 113 || i == 101))
		{
			putchar(i);
		}
	}

	putchar('\n');
	return (0);
}
