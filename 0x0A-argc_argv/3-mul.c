#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 *
 * @argc: number of inputed arguments
 * @argv: array of inputed arguments
 *
 * Return: 0 (Successful) or 1 (Error)
 */

int main(int argc, char **argv)
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d\n", mult);

		return (0);
	}
}
