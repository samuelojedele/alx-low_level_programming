#include "main.h"

/**
 * print_sign - prints the
 * sign of a number
 *
 * @n: number
 *
 * Return: 1 (n is greater
 * than zero), 0 (n is zero)
 * or -1 (n is less than zero)
 */

int print_sign(int n)
{
	/* variable initialization */
	int result;
	/* checking the sign of n */
	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}

	return (result);
}
