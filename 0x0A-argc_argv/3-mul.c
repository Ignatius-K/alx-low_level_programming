#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - adds two numbers
 * @argc: number of args
 * @argv: arguments
 *
 * Return: success_code
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}

