#include "main.h"

/**
 * _puts_recursion - print out
 * the characters in the parameter
 *
 * @s: char pointer
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	/* variable declaration and initialization */
	char *ptr = s;

	/* Terminatation statement */
	if (*ptr == '\0')
	{
		_putchar('\n');
		return;
	}

	/* print each character */
	_putchar(*ptr);

	/* Shift the pointer to the next character */
	ptr++;

	/* Recursion */
	_puts_recursion(ptr);
}
