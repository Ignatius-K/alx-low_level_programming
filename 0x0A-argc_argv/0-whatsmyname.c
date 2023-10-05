#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: exit status code
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
