#include <stdio.h>
int main (void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("The size of integer is: %lu bytes\n", sizeof(integerType));
	printf("The size of float is: %lu bytes\n", sizeof(floatType));
	printf("The size of double is: %lu bytes\n", sizeof(doubleType));
	printf("The size of char is: %lu bytes\n", sizeof(charType));

	return (0);
}
