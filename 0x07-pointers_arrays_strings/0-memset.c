#include "main.h"

/**
 * _memset - function that
 * fills memory with a constant
 * byte
 *
 * @s: pointer to a character variable
 * @b: array of characters
 * @n: number of bytes that will be used
 * in the pointed memory address
 *
 * Return: a pointer to the memory area 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i, j, len = 0;

	for (; !(b == '\0'); b++)
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < len; j++)
		{
			*ptr = b++;
		}

		ptr++;
	}

	return (s);
}
