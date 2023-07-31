#include "main.h"

/**
 * _strchr - locate char to string
 * @s: string to check
 * @c: character to check
 *
 * Return: pointer to character or Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		++s;
		if (*s == c)
			return (s);
	}

	return (0);
}
