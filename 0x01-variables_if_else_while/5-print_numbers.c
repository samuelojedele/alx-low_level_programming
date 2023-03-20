#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function prints
 * all digits in base 10.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* variable declaration */
	int numbers;

	/* looping and printing base 10 numbers */
	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%d", numbers);
	}

	/* new line */
	putchar('\n');

	return (0);
}
