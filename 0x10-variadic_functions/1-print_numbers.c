#include "variadic_functions.h"

/**
 * print_numbers - prints numbers,
 * followed by a new line.
 * @separator: string to be printed
 *	between numbers
 * @n: number of integers passed to
 *	the function
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL || *separator == '\0')
		return;

	if (n == 0)
		printf("\n");

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i == (n - 1))
			printf("\n");
		else
			printf("%s", separator);
	}

	va_end(args);
}
