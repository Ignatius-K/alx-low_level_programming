#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: number to start from
 *
 * Return: None
 */
void print_to_98(int n)
{
	int j;

	if (n < 98)
	{
		for (j = n; j < 99; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
