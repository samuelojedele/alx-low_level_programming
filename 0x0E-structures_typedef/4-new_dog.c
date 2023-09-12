#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner name.
 *
 * Return: A pointer to the created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(name));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(owner));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
