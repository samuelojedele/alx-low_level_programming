#include "main.h"

/**
 * _strcpy - copies the string pointed
 * to by src, including the terminating
 * null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: pointer pointing to the destination
 * character array.
 * @src: pointer pointing to the source
 * character array.
 *
 * Return: char* (character pointer)
 */

char *_strcpy(char *dest, char *src)
{
	/* variable declaration and initialization */
	int len = 0, l = 0;
	char *temp = src;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	for (; l <= len; l++)
	{
		dest[l] = src[l];
	}

	return (dest);
}
