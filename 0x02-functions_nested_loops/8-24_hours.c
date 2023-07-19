#include "main.h"

/**
 * jack_bauer - prints every minute
 *
 * Description: Prints every minute
 *
 * Return: void
 */

void jack_bauer(void)
{
	int first_digit;
	int second_digit;
	int third_digit;
	int fourth_digit;

	for (first_digit = 0; first_digit <= 2; first_digit++)
	{
		for (second_digit = 0; second_digit <= 9; second_digit++)
		{
			if ((first_digit == 2) && (second_digit == 4))
			{
				break;
			}
			for (third_digit = 0; third_digit <= 5; third_digit++)
			{
				for (fourth_digit = 0; fourth_digit <= 9; fourth_digit++)
				{
					_putchar('0' + first_digit);
					_putchar('0' + second_digit);
					_putchar(58);
					_putchar('0' + third_digit);
					_putchar('0' + fourth_digit);
					_putchar('\n');

				}
			}
		}
	}


}
