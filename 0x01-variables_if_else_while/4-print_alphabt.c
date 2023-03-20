#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function will
 * will print all the lower case English
 * alphabets except 'e' and 'q'.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	char alphabets;

	/* looping through lower case alphabets */
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		/* skipping 'e' and 'q' from the loop */
		if (alphabets != 'e' && alphabets != 'q')
		{
			/* printing the alphabets */
			putchar(alphabets);
		}
	}

	/* new line */
	putchar('\n');

	return (0);
}
