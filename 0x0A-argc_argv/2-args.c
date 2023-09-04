#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 *
 * @argc: number of inputed arguments
 * @argv: array of inputed arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc != 0)
	{
		printf("%s\n", argv[i]);
		i++;
		argc--;
	}

	return (0);
}
