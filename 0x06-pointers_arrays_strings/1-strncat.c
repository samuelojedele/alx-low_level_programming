#include "main.h"

/**
  * _strncat - concatenates two strings
  *		base on the specified
  *		number of bytes
  *
  * @dest: pointer to a string
  * @src: pointer to a string
  * @n: number of bytes
  *
  * Return: pointer to a string of
  * characters.
  */
char *_strncat(char *dest, char *src, int n)
{
	/* variable declaration and initialization */
	int len = 0;
	char *ptr = dest;

	/* moving the ptr pointer to the last memory address */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* concatenating the two dest and src */
	for (; len < n && src[len] != '\0'; len++)
	{
		*ptr = src[len];
		ptr++;
	}

	/* returning the concatenated strings */
	return (dest);
}
