#include "main.h"

/**
 * _strlen - returns the length
 * of string the parameter is
 * pointing to.
 *
 * @s: pointer to a string
 *
 * Return: len (unsign interger
 * value)
 */

int _strlen(char *s)
{
	/* variable declaration and initialization */
	int len = 0;

	/* looping and counting the characters in the string */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	/* returning the length of the string */
	return (len);
}
