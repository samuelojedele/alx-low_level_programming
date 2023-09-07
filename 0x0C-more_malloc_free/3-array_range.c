#include "main.h"

/**
 * array_range - creates an
 * array of integers
 *
 * @min: minimum range of values
 *	to be stored
 * @max: maximum range of values
 *	to be stored
 *
 * Return: pointer to an array
 */

int *array_range(int min, int max)
{
	/* variable and pointer declaration */
	int *ptr;
	int i;

	/* if min is more max return NULL */
	if (min > max)
		return (NULL);

	/* memory allocation */
	ptr = malloc(sizeof(int) * (max - min + 1));

	/* return NULL, if pointer is equal to NULL */
	if (ptr == NULL)
		return (NULL);

	/* filling the memory with values without the range */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	/* return pointer */
	return (ptr);
}
