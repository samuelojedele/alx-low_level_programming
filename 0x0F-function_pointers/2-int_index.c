#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of numbers
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: -1 (Error) or index of the
 * array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, result;

	/* check if array and the function pointer is NULL */
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	/* If size of array is less than or equal to 0 */
	if (size <= 0)
	{
		return (-1);
	}

		/* LOOP through the array */
	for (index = 0; index < size; index++)
	{
		/* call the function */
		result = cmp(array[index]);

		/* check if function pointer do not return 0 */
		if (result != 0)
			return (index);
	}

	return (0);
}
