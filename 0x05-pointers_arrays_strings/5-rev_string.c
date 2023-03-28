#include "main.h"

/**
 * rev_string - reverse string
 * in the pointed memory address
 * and stores it there
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	/* variable declaration and initialization */
	int n, len = 0, l = 0, i = 0;
	char *temp = s;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	n = --len;

	/* looping through the string in reverse order */
	while (len >= 0)
	{

		temp[l] = *(s + len);
		len--;
		l++;
	}

	while (i <= n)
	{
		*(s + i) = temp[i];
		i++;
	}
}
