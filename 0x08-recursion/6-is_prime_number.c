#include "main.h"
#include <stdio.h>

/**
 * is_factor - check if number has factor
 * @number: number
 * @factor: factor
 *
 * Return: 1 if factor else 0
 */
int is_factor(int factor, int number)
{
	if (number % factor == 0)
		return (1);
	return (0);
}

/**
 * get_factors - returns number of factors
 * @base: staart point
 * @number: number to check
 *
 * Return: number of factors
 */
int get_factors(int base, int number)
{
	if (base == number)
		return (1);
	return (is_factor(base, number) + get_factors(base + 1, number));
}

/**
 * is_prime_number - checks whether n is prime
 * @n: number to check
 *
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	int n_factors;

	if (n < 2)
		return (0);

	n_factors = get_factors(1, n);
	if (n_factors == 2)
		return (1);
	else
		return (0);
}
