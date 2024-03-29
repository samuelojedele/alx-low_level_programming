#include "dog.h"

/**
 * init_dog - initialize the properties
 * of a dog.
 * @d: address of struct.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the owner of the dog.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
