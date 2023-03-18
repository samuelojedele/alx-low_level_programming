#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 * Description: This is a program that
 * determines if a number is positive
 * negative.
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* variable declaration */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Determining if n is positive or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
