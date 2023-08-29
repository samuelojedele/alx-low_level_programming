#include "main.h"

/**
 * rev_array - reverse elements of an array
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int* ptr = a;
	int len = 0;
	int temp;

	while(*ptr != '\0')
	{
		ptr++;
	}

	for(; len < n; len++)
	{
		temp = a[n - 1];
		a[n - 1] = a[len];
		a[len] = temp;
		n--;
	}
}
