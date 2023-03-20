#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point.
 * Description: the main function prints
 * a the last digit of a random number
 *.
 * Return: 0 (Success)
 */

int main(void)
{
	/* variables declaration */
	int n, last_digit;

	/* getting random numbers */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* getting the last digit of n */
	last_digit = n % 10;

	/* determining if last_digit range of last_digit */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less", n, last_digit);
		printf("than 6 and not 0\n");
	}

	return (0);
}
