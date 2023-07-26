#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to char of copied string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
	}

	return (dest);
}
