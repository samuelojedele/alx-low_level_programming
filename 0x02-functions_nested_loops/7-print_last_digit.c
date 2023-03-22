#include "main.h"

/**
 * print_last_digit - prints
 * last digit of an arg.
 *
 * @n: number
 *
 * Return: the absolute value
 * of the last digit.
 */

int print_last_digit(int n)
{
	/* variable initialization */
	int result = n % 10;

	/* convert result absolute value */
	if (result < 0)
	{
		result = -result;
	}

	/* printing result */
	_putchar(result + '0');

	return (result);
}
