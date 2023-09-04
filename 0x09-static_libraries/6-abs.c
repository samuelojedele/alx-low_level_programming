#include "main.h"

/**
 * _abs - converts args.
 * to absolute numbers
 *
 * @n: number
 *
 * Return: absolute number
 */

int _abs(int n)
{
	/* variable initialization */
	int result = 0;

	/* converting n to absolute value */
	if (n < 0)
	{
		result = -n;
	}
	else
	{
		result = n;
	}

	return (result);
}
