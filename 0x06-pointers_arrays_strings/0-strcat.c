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
	int len = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (; *src != '\0'; src++)
	{
		*ptr = src[len];
		ptr++; 
	}

	*ptr = '\0';

	return (dest);
}
