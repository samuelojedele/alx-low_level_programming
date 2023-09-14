#include "3-calc.h"

/**
 * main - Entry Point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int (*operation_func)(int, int);
	int result;

	operation_func = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operation_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(99);
	}
	else
	{

		if (operation_func != NULL)
		{
			result = operation_func(atoi(argv[1]), atoi(argv[3]));

			printf("%d\n", result);
		}
		else
			printf("Operation not found or invalid.\n");

	}

	return (0);
}
