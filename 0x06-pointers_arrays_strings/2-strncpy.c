#include "main.h"

/**
 * _strncpy - copys strings from one
 * 	character array to another
 * 	with a soecifeid maximum number
 * 	of characters to be copied.
 *
 * @*dest: pointer to the destination
 * 	character arrays where string
 * 	be copied to.
 * @*scr: pointer to the source character
 * 	arrays where string will be copied
 * 	from.
 * @n: maximum number of characters to copy
 * 	from the source string.
 *
 * Return: char* (character pointer)
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* Variable to track the current length */
	int len;
	/* Pointer to iterate through the destination array */
	char* ptr = dest;

	/* Loop 'n' times to copy characters */
	for(len = 0; len < n; len++)
	{
		/* Check if the source string has ended */
		if(*src == '\0')
		{
			/* If ended, terminate destination string */
			*ptr = '\0';
		}
		else
		{
			/* Copy a character from source to destination */
			*ptr = src[len];
		}

		/* Move the destination pointer to the next position */
		ptr++;
	}

	/* Return a pointer to the modified destination array */
	return dest;
}
