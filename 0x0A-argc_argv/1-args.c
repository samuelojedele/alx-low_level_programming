#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of
 * arguments passed into it.
 *
 * @argc: number of inputed argument
 * @argv: array of inputed argument
 *
 * Return: Always 0 (Success);
 */

int main(int argc, char **argv __attribute__ ((unused)))
{
	int nargs = argc - 1;

	printf("%d\n", nargs);

	return (0);
}
