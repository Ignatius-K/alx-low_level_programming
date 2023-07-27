#include "main.h"

/**
 * string_toupper - string to upper
 * @str: string
 * Return: pointer
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}

	return (str);
}

