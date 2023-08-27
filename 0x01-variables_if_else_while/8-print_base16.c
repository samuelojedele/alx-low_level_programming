#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all the characters in base 16
 * Return: always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int number;
	int base = 16;
	char alpha = 'a';

	/* prints all the characters in base 16 */
	for (number = 0; number < base; number++)
	{
		if (number > 9)
		{
			putchar(alpha);
			alpha++;
		}
		else
		{
			putchar(number + '0');
		}
	}

	/* print new line */
	putchar('\n');

	return (0);
}
