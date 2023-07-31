#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 *
 * Return: pointer of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
