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
	int i;
	int result = 0;

	/**
	 * If no number is passed to the program,
	 * print 0, followed by a new line
	 */
	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		/**
		 * If one of the number contains symbols
		 * that are not digits, print Error,
		 * followed by a new line, and return 1
		 */

		int j;
		for(j = 0; j != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
				break;
			}
		}


		/* Addition of the number */
		result += atoi(argv[i]);
	}

	/* print the sum */
	printf("%d\n", result);

	return (0);
}
