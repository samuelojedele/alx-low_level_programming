#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints a number of
 * elements of an array of integers,
 * followed by a new line.
 *
 * @a: pointer to an array
 * @n: number of array values to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	/* variable declaration and initialization */
	int i = 0;

	/* looping and printing the values of the array */
	for (; i < n; i++)
	{
		printf("%d, ", a[i]);
	}

	/* new line */
	printf("\n");
}
