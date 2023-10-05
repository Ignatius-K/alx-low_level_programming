#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * main - prints arguments
 * @argc: number of args
 * @argv: arguments
 *
 * Return: success_code
 */
int main(int argc, char **argv)
{
	int i, sum;

	int check_int(char *str);
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!check_int(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}


/**
 * check_int - checks if str is integer
 * @str: string to check
 *
 * Return: int / bool
 */
int check_int(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] < 48) || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}


