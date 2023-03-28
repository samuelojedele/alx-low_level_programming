#include "main.h"

/**
 * puts_half -  prints half of
 * a string, followed by a new line
 *
 * @str: pointer to a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	/* variable declaration and initialization */
	int len = 0, n = 0;
	char *temp = str;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;

		for (; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = (len - 1) / 2;

		for (; n <= len; n++)
		{
			_putchar(str[n]);
		}
	}

	_putchar('\n');
}
