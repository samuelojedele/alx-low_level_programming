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
		for (j = 0; j <= 99; j++)
		{
			num1 = i;
			num2 = j;

			/* print the first two digits */
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));

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
