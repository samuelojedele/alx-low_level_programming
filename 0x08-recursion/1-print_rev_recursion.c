#include "main.h"


/**
 * _print_rev_recursion - prints a string
 * in reverse.
 *
 * @s: pointer to a string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* variable declaration */
	char *str = s;

	/* base case */
	if (*str == '\0')
	{
		return;
	}

	/* recursion */
	_print_rev_recursion(str + 1);

	/* printing of character */
	_putchar(*str);
}
