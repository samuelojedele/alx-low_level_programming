#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* variable declaration */
	char *ptr;

	/* return NULL, if both parameters equal to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* memory allocation */
	ptr = malloc(size * nmemb);

	/* return NULL, if pointer is NULL */
	if (ptr == NULL)
		return (NULL);

	/* fill the allocated memory with 0 */
	_memset(ptr, 0, nmemb * size);

	/* return pointer */
	return (ptr);
}

/**
 * _memset - allocates memory with a constant byte
 *
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory of array
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* variable declaration */
	unsigned int i;

	/* fill the memory with b content */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	/* return pointer (s) */
	return (s);
}
