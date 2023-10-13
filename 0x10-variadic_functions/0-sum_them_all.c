#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - gets sum of variable arguments
 * @n: number of variable args
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list val;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(val, n);
	for (i = 0; i < n; i++)
		sum += va_arg(val, int);
	va_end(val);

	return (sum);
}
