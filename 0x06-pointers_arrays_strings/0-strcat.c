#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 * Return: pointer to a string of
 * characters.
 */
char *_strcat(char *dest, char *src)
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
	for (; *src != '\0'; src++)
	{
		*ptr = src[len];
		ptr++;
	}

	/* new line */
	*ptr = '\0';

	/* returning the concatenated strings */
	return (dest);
}
