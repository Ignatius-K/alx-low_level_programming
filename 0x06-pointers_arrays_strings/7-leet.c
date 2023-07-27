#include "main.h"

/**
 * leet - convert string to leet
 * @str: string to convert
 *
 * Return: str
 */
char *leet(char *str)
{

	int i;
	int j;
	int a_leet[] = {65, 69, 76, 79, 84};
	int c_leet[] = {4, 3, 1, 0, 7};

	i = 0;

	while (str[i] != '\0')
	{

		j = 0;
		while (j < 5)
		{
			if ((str[i] - 32 == a_leet[j]) || (str[i] == a_leet[j]))
			{
				str[i] = '0' + c_leet[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}
