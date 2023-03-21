#include <stdio.h>

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
	int result = n;

	/* convert result absolute value */
	if (result < 0)
	{
		result = -result;
	}

	result %= 10;

	/* printing result */
	printf("%d", result);

	return (result);
}
