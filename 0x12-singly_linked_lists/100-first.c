#include <stdio.h>



void start_print(void) __attribute__ ((constructor));


/**
 * start_print - prints text before main executed
 *
 * Return: nothing
 */
void start_print(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
