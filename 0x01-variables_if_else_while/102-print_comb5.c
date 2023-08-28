#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all possible combinations of two
 * two-digit numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int i;
	int j;
	int num1;
	int num2;

	/* print all possible combinations of two two-digit numbers */
	for (i = 0; i <= 98; i++)
	{
		for (j = i; j <= 99; j++)
		{
			num1 = i;
			num2 = j;

			/* print the first two digits */
			if (num1 < 10)
			{
				putchar('0');
				putchar(num1 + '0');
			}
			else
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
			}

			/* print a space between the digits */
			putchar(' ');

			/* print the last two digits */
			if (num2 < 10)
			{
				putchar('0');
				putchar(num2 + '0');
			}
			else
			{
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
			}

			/* print separator if needed */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* print new line */
	putchar('\n');

	return (0);
}
