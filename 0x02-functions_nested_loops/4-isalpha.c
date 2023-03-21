#include "main.h"

/**
 * _isalpha - checks if a
 * character is an alphabet
 *
 * @c: character to be checked
 *
 * Return: 1 (alphabet character)
 * or 0 (Non alphabet character)
 */

int _isalpha(int c)
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

	/* looping through uppercase alphabets */
	for (alpb = 'A'; alpb <= 'Z'; alpb++)
	{
		/* checking if arg. uppercase alphabets */
		if (alpb == c)
		{
			result = 1;
			break;
		}
	}

	return (result);
}
