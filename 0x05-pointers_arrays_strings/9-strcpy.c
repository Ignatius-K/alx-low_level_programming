#include "main.h"

/**
 * _strcpy - does sth
 * @dest: pointer
 * @src: pointer
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}
