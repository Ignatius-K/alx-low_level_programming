#include "main.h"

/**
 * _isalpha - checks whether character is alphabetic
 *
 * Description: check whether character provided
 * is letter, lower or upper
 *
 * @c: character to check
 *
 * Return: 1 if character is alphabetic else 0
 */

int _isalpha(int c)
{

	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
