#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * given as a parameter on each element
 * of an array
 * @array: array of numbers
 * @size: size of the array
 * @action: function pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i++]);
		}
	}
}
