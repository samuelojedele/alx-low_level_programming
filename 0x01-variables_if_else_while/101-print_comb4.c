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
	int digit1;
	int digit2;
	int digit3;
	int perm_index;

	/* print all possible combinations of three digits */
	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				digit1 = i;
				digit2 = j;
				digit3 = k;

				/* calculate permutation index to check for duplicates */
				perm_index = digit1 * 100 + digit2 * 10 + digit3 ;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				/* print separators if needed */
				if ( perm_index != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	/* print new line */
	putchar('\n');

	return (0);
}
