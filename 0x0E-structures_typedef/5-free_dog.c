#include <stdlib.h>

/**
 * free_dog - frees dog memory
 * @d: memory address of the dog
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}
