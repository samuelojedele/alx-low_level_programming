#include "main.h"

/**
 * puts2 - prints every other
 * character of a string,
 * starting with the first
 * character, followed by a
 * new line.
 *
 * @str:  pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
	/* variable declaration and initialization */
	int len = 0, l = 0;
	char *temp = str;

	/* looping and counting the characters in the string */
	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	for (; l < len; l++)
	{
		if ((str[l] % 2) == 0)
		{
			_putchar(str[l]);
		}
	}

	_putchar('\n');
}
