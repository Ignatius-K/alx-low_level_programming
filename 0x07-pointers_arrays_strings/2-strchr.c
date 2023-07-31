#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate char to string
 * @s: string to check
 * @c: character to check
 *
 * Return: pointer to character or Null
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return (NULL);
}
