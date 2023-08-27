#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * numbers(0-9) separated by ', '
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int number;

	/* prints numbers(0-9) separated by ', ' */
	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');

		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	/* print new line */
	putchar('\n');

	return (0);
}
