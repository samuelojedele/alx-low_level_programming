#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: The main function
 * prints all digits in base 10 with
 * the use of putchar()
 * Return: Always 0(Success)
 */

int main(void)
{
	/* variable declaration */
	int base = 10;
	int number;

	/* printing the all the numbers in base 10 */
	for (number = 0; number < base; number++)
	{
		putchar(number + '0');
	}

	/* print new line */
	putchar('\n');

	return (0);
}
