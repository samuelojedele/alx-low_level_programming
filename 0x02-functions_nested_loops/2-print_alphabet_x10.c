#include "main.h"

void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - prints
 * lowercase alphabets 10 times.
 *
 * Return: void (No return value)
 */

void print_alphabet_x10(void)
{
	/* variables initialization */
	int i;
	char alpb;

	/* looping the number of times to print */
	for (i = 0; i < 10; i++)
	{
		/* looping and printing lowercase alphabets */
		for (alpb = 'a'; alpb <= 'z'; alpb++)
		{
			_putchar(alpb);
		}

		/* printing new line */
		_putchar('\n');
	}
}
