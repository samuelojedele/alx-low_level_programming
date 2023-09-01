#include "main.h"

/**
 * _strlen_recursion - returns the
 * length of a string
 *
 * @s: pointer to a string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	/* variable declaration */
	char *str  = s;

	/* base case */
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++str));
	}
}
