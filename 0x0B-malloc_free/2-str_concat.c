#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{

	char *ptr;
	int i, str_len_1, str_len_2, str_len_3;

	int get_str_size(char *str);

	str_len_1 = get_str_size(s1);
	str_len_2 = get_str_size(s2);
	str_len_3 = str_len_1 + str_len_2;

	ptr = malloc(sizeof(char) * str_len_3 + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_len_3; i++)
	{
		if (i < str_len_1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - str_len_1];
		}
	}

	ptr[str_len_3] = '\0';

	return (ptr);
}

/**
 * get_str_size - gets size of string
 * @str: pointer to string
 *
 * Return: length of string
 */
int get_str_size(char *str)
{

	int i;

	i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
