#include "main.h"

int find_prime(int n, int prime);

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number
 *
 * Return: 1(n is a prime number)
 * or 0(is not a prime number)
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (find_prime(n, 2));
}

/**
 * find_prime - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: number
 * @prime: primality test
 *
 * Return:  1(n is a prime number)
 * or 0(is not a prime number)
 */

int find_prime(int n, int prime)
{
	if ((n % prime) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}

	find_prime(n, (prime + 1));
}
