#include "main.h"

int _islower(int c);

/**
 * _islower - checks if an
 * alphabet is in lowercase
 *
 * @c: the character to check
 * if its lowercase
 *
 * Return: 1 (lowercase alphabet)
 * or 0 (Non lowercase alphabet)
 */

int _islower(int c)
{
	/* variables initialization */
	char alpb;
	int result = 0;

	/* looping through lowercase alphabets */
	for (alpb = 'a'; alpb <= 'z'; alpb++)
	{
		/* checking if the arg. is lowercase */
		if (alpb == c)
		{
			result = 1;
			break;
		}
	}

	return (result);
}
