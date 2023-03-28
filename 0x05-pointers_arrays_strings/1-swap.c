#include "main.h"

/**
 * swap_int - swaps the values
 * of the memory addresses the
 * parameters are pointing to.
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	/* declaration and initialization of temp */
	int temp = *a;

	/* swaping *a and *b */
	*a = *b;
	*b = temp;
}
