#include "3-calc.h"
#include <string.h>
/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (
		strcmp(argv[2], "+") &&
		strcmp(argv[2], "-") &&
		strcmp(argv[2], "*") &&
		strcmp(argv[2], "/") &&
		strcmp(argv[2], "%")
	)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}


	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
