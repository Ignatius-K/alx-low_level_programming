#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_op_func - gets operations based on character
 * @s: char to refer to the operation
 *
 * Return: pointer function that returns int with 2 int args
 */
int (*get_op_func(char *s))(int, int)
{

	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

