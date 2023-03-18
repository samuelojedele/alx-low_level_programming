#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the
 * datatypes sizes.
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Datatype declaration */
	int integerType;
	float floatType;
	long int longIntType;
	long long int longLongIntType;
	char charType;

	/* Printing the size of Datatypes above */
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongIntType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}
