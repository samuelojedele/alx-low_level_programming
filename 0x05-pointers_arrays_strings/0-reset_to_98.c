#include "main.h"

/**
 * reset_to_98 - resets the value
 * of the memory address its pointing
 * to, to 98
 *
 * @n: a pointer to a variable
 *
 * Return: non (No return value)
 */

void reset_to_98(int *n)
{
	/* assigning 98 to the variable *n is pointing to */
	*n = 98;
}
