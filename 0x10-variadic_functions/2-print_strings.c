#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_separator(const char *separator);

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
	const char *str;

	va_start(val, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(val, const char*);
		printf("%s", str ? str : "(nil)");
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


