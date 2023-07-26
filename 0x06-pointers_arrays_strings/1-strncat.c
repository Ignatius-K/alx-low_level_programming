#include "main.h"

/**
 * _strncat - concats strings by n bytes
 * @dest: string to concat to
 * @src: string to concatenate
 * @n: number of bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

	int dest_len;
	int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
