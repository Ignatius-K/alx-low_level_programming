#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit of number checks it
 *
 * Description: gets the last digit of number
 * and checks whether the number is greater than 5, is 0,
 * less than 6 and not 0
 *
 * Return: 0 everytime
 */
int main(void)
{
	int n;
	int last_digit;
	char start[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = abs(n % 10);

	if (last_digit > 5)
	{
		printf("%s of %d is %d and is greater than 5", start, n, last_digit);
	}
	else if (n == 0)
	{
		printf("%s of %d is %d and is 0", start, n, last_digit);
	}
	else
	{
		printf("%s of %d is %d and is less than 6 and not 0", start, n, last_digit);
	}

	printf("\n");



	return (0);
}
