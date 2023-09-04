#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 *
 * @argc: number inputed arguments
 * @agrv: array of inputed arguments
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute__ ((unused)) argc, char **agrv)
{
	printf("%s\n", *agrv);

	return (0);
}

