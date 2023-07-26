#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 *
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{

	int dest_len;
	int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
