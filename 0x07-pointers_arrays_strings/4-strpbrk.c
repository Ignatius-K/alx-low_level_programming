#include "main.h"

/**
 * _strpbrk - first occur
 * @s: string
 * @accept: accepted string
 *
 * Return: pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *current_accept = accept;

		while (*current_accept != '\0')
		{
			if (*s == *current_accept)
			{
				return (s);
			}
			++current_accept;

		}
		++s;
	}
	return (0);
}
