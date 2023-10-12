#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs arithmetric operations
 *
 * Description: If wrong number of args, exit with 98
 * If operation undefined, exit with 99
 * if, wrong operation, we exit with 100
 *
 * @argc: number of arguments supplied to program
 * @argv: arguments
 *
 * Return: execution status
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '/' && argv[2][0] != '*' && argv[2][0] != '+'
			&& argv[2][0] != '-' && argv[2][0] != '%') || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
