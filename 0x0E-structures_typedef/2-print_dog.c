#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * @d: dog to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	name = d->name;
	age = d->age;
	owner = d->owner;

	if (name == NULL)
	{
		printf("Name: (NIL)\n");
	}
	else
	{
		printf("Name: %s\n", name);
	}

	if (age < 0)
	{
		printf("Age: (NIL)\n");
	}
	else
	{
		printf("Age: %f\n", age);
	}
	if (owner == NULL)
	{
		printf("Owner: (NIL)\n");
	}
	else
	{
		printf("Owner: %s\n", owner);
	}
}
