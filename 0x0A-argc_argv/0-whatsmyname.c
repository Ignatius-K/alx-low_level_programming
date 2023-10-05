#include "main.h"

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: exit status code
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	int i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

}
