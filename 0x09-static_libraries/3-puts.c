#include "main.h"

/**
 * _puts - prints a string
 * and a new line to stdout
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void _puts(char *str)
{
	/* looping through the string */
	while (*str != '\0')
	{
		/* printing the characters of the string */
		_putchar(*str);
		str++;
	}

	/* print new line */
	_putchar('\n');
}
