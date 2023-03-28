#include "main.h"

/**
 * print_rev - prints the reverse
 * of a string
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	/* variable declaration and initialization */
	int len = 0;
	char *temp = s;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	len--;

	/* looping through the string in reverse order */
	while (len >= 0)
	{
		/* printing the characters of the string */
		_putchar(*(s + len));
		len--;
	}

	/* print new line */
	_putchar('\n');
}
