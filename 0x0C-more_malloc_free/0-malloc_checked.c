#include "main.h"

/**
 * malloc_checked - allocates memory
 * with the use of malloc
 *
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	/* variable declaration */
	void *ptr;

	/* allocation of memory space */
	ptr = malloc(b);

	/* terminate, if pointer is NULL */
	if (ptr == NULL)
	{
		exit(98);
	}

	/* return pointer */
	return (ptr);
}
