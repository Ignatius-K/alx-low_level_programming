#include "main.h"
#include <string.h>

/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: number integer
 */

int _atoi(char *s)
{
	int j, first_digit_position, number, positives, negatives, length;
	length = strlen(s);

	negatives = 0;
	positives = 0;
	first_digit_position = -1;
	for (j = 0; j < length; j++)
	{
		if (s[j] > 47 && s[j] < 58)
		{
			number = s[j] - '0';
			first_digit_position = j;
			break;
		}
	}
	if (first_digit_position < 0)
		number = 0;
	else
	{
		for (j = first_digit_position + 1; j < length; j++)
		{
			if (s[j] >= 48 && s[j] <= 57)
				number = (number * 10) + (s[j] - '0');
			else
			{
				break;
			}
		}
		for (j = 0; j < first_digit_position; j++)
		{
			if (s[j] == '-')
				negatives += 1;
			else if (s[j] == '+')
				positives += 1;
		}
		if (negatives > positives)
			number = number * -1;
	}
	return (number);
}




