#include <stdio.h>
#include "dog.h"

#define _NULL_ "(nil)"

/**
 * print_dog - prints the properties
 * of a dog
 * @d: address to struct dog
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}

	if (!d->name)
	{
		printf("Name: %s\n", _NULL_);
	}
	else if (!d->age)
	{
		printf("Age: %s\n", _NULL_);
	}
	else if (!d->owner)
	{
		printf("Name: %s\n", _NULL_);
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Name: %s\n", d->owner);
	}
}
