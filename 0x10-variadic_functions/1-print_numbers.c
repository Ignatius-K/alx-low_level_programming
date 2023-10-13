#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_separator(const char *separator);

/**
 * print_numbers - prints the numbers
 * @separator: string to separate printed numbers
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list val;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(val, int));
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
