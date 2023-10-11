#include "function_pointers.h"

/**
 * print_name - prints name by pointer function
 * @name: string to print
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
