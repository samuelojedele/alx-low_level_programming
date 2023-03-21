#include "main.h"

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

	int i;

	/* looping and print output */
	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}

	/* new line */
	_putchar('\n');

	return (0);

}
