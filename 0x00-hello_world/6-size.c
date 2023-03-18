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
	double doubleType;
	char charType;

	/* Printing the size of Datatypes above */
	printf("The size of integer is: %lu bytes\n", sizeof(integerType));
	printf("The size of float is: %lu bytes\n", sizeof(floatType));
	printf("The size of double is: %lu bytes\n", sizeof(doubleType));
	printf("The size of char is: %lu bytes\n", sizeof(charType));

	return (0);
}
