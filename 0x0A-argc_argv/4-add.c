#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Description: adds positive numbers
 * @argc: number of arguments inputed
 * @argv: array of inputed arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char **argv)
{
	/* variable declaration */
	int i, j;
	int result = 0;

	/* If no number is passed to the program, print 0, followed by a new line. */
	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	/* If one of the number contains symbols that are not digits */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	/* calculate the sum */
	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}

	/* print the sum */
	printf("%d\n", result);

	return (0);
}
