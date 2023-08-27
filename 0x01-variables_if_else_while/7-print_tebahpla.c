#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all the alphabets in reverse order
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	char alpha;

	/* print alphabets in reverse order */
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}

	/* print new line */
	putchar('\n');

	return (0);
}
