#include "main.h"

/**
 * _strspn - span substring
 * @s: string
 * @accept: substring
 *
 * Return: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int j, k;
	unsigned int i, n;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{

		k = 0;
		n = 0;
		while (accept[k] != '\0')
		{

			if (accept[k] == s[j])
			{
				n++;
				break;
			}

			k++;
		}

		if (n > 0)
			i++;
		else
			break;

		j++;
	}

	return (i);
}
