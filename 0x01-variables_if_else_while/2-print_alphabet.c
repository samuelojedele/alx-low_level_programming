#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description - The main function
 * prints the English alphabet in
 * lower case.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	char alphabets;

	/* looping through alphabets */
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		/* print the alphabets sequentially */
		putchar(alphabets);
	}

	/* new line */
	putchar('\n');

	return (0);
}
