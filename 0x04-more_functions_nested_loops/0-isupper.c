#include "main.h"

/**
 * _isupper - checks whether character is upper
 * @c: character to check
 * Return: 1 if character is upper else 0
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
