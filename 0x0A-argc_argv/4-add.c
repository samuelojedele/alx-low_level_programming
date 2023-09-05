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
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("%d\n", result);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{

		if (!isdigit(argv[i][0]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}

	printf("%d\n", result);

	return (0);
}
