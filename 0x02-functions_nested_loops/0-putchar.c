#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function
 * a program that prints _putchar,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration and initialization */
	char output[8] = "_putchar";

	/* looping and print output */
	for (int i = 0; i < 8; i++)
	{
		putchar(output[i]);
	}

	/* new line */
	putchar('\n');

	return (0);

}
