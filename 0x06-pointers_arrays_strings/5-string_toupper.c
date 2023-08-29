#include "main.h"

/**
 * string_toupper - convert lower case
 * 	characters to upper case characters
 *
 * @s: pointer to a string
 *
 * Return: pointer.
 */
char *string_toupper(char *s)
{
	/* variables initialization */
	char* ptr = s;
	char output[];
	char alpha;
	int len = 0;

	for(; *ptr != '\0'; ptr++)
	{
		for(alpha = 'A'; alpha <= 'Z'; alpha++)
		{
			if(*ptr != alpha)
			{
				output[len] = *ptr + 32;
			}
			else
			{
				output[len] = *ptr;
			}
		}
		len++;
	}

	return output;
}
