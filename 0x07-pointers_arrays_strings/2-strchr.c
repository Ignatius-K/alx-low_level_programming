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
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
