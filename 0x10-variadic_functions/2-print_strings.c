#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_separator(const char *separator);

int is_string(char *);

/**
 * print_strings - prints the numbers
 * @separator: string to separate printed numbers
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list val;
	char *str;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(val, char*);
		if (!str)
			printf("(nil)");
		else
		{
			if (is_string(str) == 1)
			{
				printf("%s", str);
			}
		}
		if (i < n - 1)
			print_separator(separator);

	}
	va_end(val);
	printf("\n");
}


/**
 * print_separator - prints separator
 * @separator: string to print
 *
 * Return: void
 */
void print_separator(const char *separator)
{
	if (separator)
		printf("%s", separator);
}

/**
 * is_string - checks whether str is string
 * @str: characters to check
 *
 * Return: 1 if true else 0
 */
int is_string(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
			return (0);
		i++;
	}
	return (1);
}


















