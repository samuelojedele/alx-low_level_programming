#include "main.h"

/**
 * wildcmp - compares two strings
 *
 * @s1: pointer to a character in
 * a string
 * @s2: pointer to a character in
 * a string
 *
 * Return: 1 (strings are identical)
 * or 0 (strings are not identical)
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case: If both strings are empty, they are identical. */
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
		return (1);
	}

	/**
	 * If the current character in s2 is '*',
	 * it can represent an empty string or
	 * match a character in s1.
	 */

	if (*s2 == '*')
	{
		/* Check if s2 can match an empty string */
		if (wildcmp(s1, s2 + 1) == 1)
		{
			return (1);
		}

		/* Check if s2 can match a character in s1 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1)
		{
			return (1);
		}
	}

	/**
	 * If the current characters in s1 and s2 are the same,
	 * or if s2 is '?', move to the next characters
	 * in both strings.
	 */

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If none of the conditions above are met, the strings are not identical. */
	return (0);
}
