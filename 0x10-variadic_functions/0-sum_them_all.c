#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of variadic parameters
 *
 * Return: sum of its parameters or 0(if there
 * is no variadic paraneters)
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; (unsigned int)i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
