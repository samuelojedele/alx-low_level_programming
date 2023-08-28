#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all possible different combinations
 * of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int i;
	int j;
	int k;

	/* print all possible combinations of three digits */
	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
