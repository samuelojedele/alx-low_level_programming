#include "main.h"

int find_sqrt(int n, int root);

/**
 * _sqrt_recursion -  returns the natural
 * square root of a number.
 *
 * @n: integer
 *
 * Return: natural square root, or -1 (not natural root)
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 0));
}

/**
 * find_sqrt -  returns the natural
 * square root of n.
 *
 * @n: number to find the sqrt for
 * @root: possible root of n
 *
 * Return: natural square root, or -1 (not natural root)
 */

int find_sqrt(int n, int root)
{
	if ((root * root) > n)
	{
		return (-1);
	}
	else if ((root * root) == n)
	{
		return (root);
	}
	else
	{
		return (find_sqrt(n, (root + 1)));
	}
}
