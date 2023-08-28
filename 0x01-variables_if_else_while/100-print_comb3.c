#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all possible different combinations
 * of two digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int i;
	int j;

	/* print all possible combination of two digits */
	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			/* print separator if needed */
			if (i != 8 || j != 9)
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
