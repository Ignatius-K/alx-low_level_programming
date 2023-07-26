#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal else -ve if s1 less s2 else +ve
 */

int _strcmp(char *s1, char *s2)
{

	int s1_len;
	int i;

	s1_len = 0;

	while (s1[s1_len] != '\0')
		s1_len++;

	for (i = 0; i < (s1_len + 1); i++)

		if (s1[i] > s2[i])
			return (15);

		else if (s1[i] < s2[i])
			return (-15);

	return (0);
}
