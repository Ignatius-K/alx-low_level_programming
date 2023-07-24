#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int j;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}


	for (j = 0; j < (length / 2); j++)
	{
		char tmp;

		tmp = s[j];
		s[j] = s[length - 1 - j];
		s[length - 1 - j] = tmp;
	}
}
















