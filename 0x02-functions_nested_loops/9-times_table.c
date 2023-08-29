#include "main.h"

/**
 * times_table - prints
 * 0-9 times table.
 *
 * Return: void
 */

void times_table(void)
{
	/* variable declaration */
	int i, j;
	int result;
	int digit1, digit2;

	/* Print 0-9 times table */
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			digit1 = result / 10;
			digit2 = result % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + digit2);
			}
			else
			{
				_putchar('0' + digit1);
				_putchar('0' + digit2);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
