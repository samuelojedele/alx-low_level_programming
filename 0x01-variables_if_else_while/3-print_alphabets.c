#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function will
 * print upper and lower case of the
 * of the English alphabet.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	char alphabets;

	/* looping and printing the lower case alphabets */
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}

	/* looping and printing the upper case alphabets */
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}

	/* new line */
	putchar('\n');

	return (0);
}
