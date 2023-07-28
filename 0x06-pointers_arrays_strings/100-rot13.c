#include "main.h"

/**
 * rot13 - convert string to rot13
 * @str: string to convert
 *
 * Return: converted string pointer
 */
char *rot13(char *str)
{

	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{

		for (j = i; ((str[j] > 64 && str[j] < 122) || (str[j] > 96 && str[j] < 123))
				; j++)
		{
			if ((str[j] > 96 && str[j] < 110) || (str[j] > 64 && str[j] < 78))
			{
				str[j] += 13;
			}

			else
			{
				str[j] -= 13;
			}

			i++;

		}

		i++;

	}

	return (str);
}
