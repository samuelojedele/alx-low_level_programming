#include "main.h"

/**
 * string_nconcat - concatenate
 * n bytes of a string to another
 * string
 *
 * @s1: str to concatenate to
 * @s2: str to concatenate from
 * @n: number of bytes concatenate
 * from s2 to s1
 *
 * Return: a pointer to the concatenated
 * string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* variable declaration and initialization */
	char *str;
	unsigned int i = 0, j = 0;
	unsigned int len1 = 0, len2 = 0;

	/* calculate the length of s1 and s2 */
	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	/* condition for memory allocation */
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	/* return NULL when function fails */
	if (!str)
		return (NULL);

	/* copy the content of s1 to str */
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	/* concatenating s1 and n-th byte of s2 */
	while (n < len2 && i < (len1 + n))
		str[i++] = s2[j++];

	/* concatenating s1 and s2 */
	while (n >= len2 && i < (len1 + len2))
		str[i++] = s2[j++];

	/* inserting null value to end string */
	str[i] = '\0';

	/* returning str */
	return (str);
}
