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
	int len = 0, l = 0;
	char *temp = s;
	char temp2;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	/* looping and swapping the string */
	for (; l < len; l++)
	{
		temp2 = s[len - 1];
		s[len - 1] = s[l];
		s[l] = temp2;
		len--;
	}
}
