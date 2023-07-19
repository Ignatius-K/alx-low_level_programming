#include "main.h"

/**
 * _islower - checks whether c is lowercase
 *
 * Description: checks if character provided
 *
 * @c: character to check
 *
 * Return: 1 if c lowercase else 0
 */
int _islower(int c)
{

	if ((c > 96) && (c < 123))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
