#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of string
 * @s: pointer
 * Return: n length of string
 */

int _strlen(char *s)
{
	int n;

	for (n = 0;; n++)
	{
		if (*(s + n) == '\0')
		{
			break;
		}

		n++;
	}

	return (n++);
}
