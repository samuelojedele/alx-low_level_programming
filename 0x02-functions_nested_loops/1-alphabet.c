#include "main.h"

void print_alphabet(void);

/**
 * print_alphabet - prints lowercase
 * alphabets.
 *
 * Return: void (No return value)
 */

void print_alphabet(void)
{
	/* variable initialization */
	char alpb;

	/* looping and printing lowercase alphabets */
	for (alpb = 'a'; alpb <= 'z'; alpb++)
	{
		_putchar(alpb);
	}

	/* new line */
	_putchar('\n');
}
