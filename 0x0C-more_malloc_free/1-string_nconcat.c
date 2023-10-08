#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * string_nconcat - concatenates strings
 * @s1: string 1 to concatenate to
 * @s2: string 2 to be added to s1
 * @n: number of bytes from s2 to add to s1
 *
 * Return: pointer to newly created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len;
	int index;
	unsigned int i;
	char *ptr;

	s1_len = 0;
	if (s1 != NULL)
		while (s1[s1_len] != '\0')
			s1_len++;

	ptr = malloc(sizeof(char) * (s1_len + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < s1_len; index++)
		ptr[index] = s1[index];

	if (s2 != NULL)
		for (i = 0; ((i < n) && (s2[i] != '\0')); i++)
		{
			ptr[index] = s2[i];
			index++;
		}

	ptr[index] = '\0';

	return (ptr);
}
