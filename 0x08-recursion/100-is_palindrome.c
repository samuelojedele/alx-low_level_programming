#include "main.h"

int str_len(char *str);
int check_palindrome(int firstChar, int lastChar, char *str);

/**
 * is_palindrome - checks if a string
 * is palindrome
 *
 * @s: string
 *
 * Return: 1(string is a palindrome) or
 * 0 (string is not a palindrome).
 */

int is_palindrome(char *s)
{
	int len = str_len(s) - 1;

	return (check_palindrome(0, len, s));
}

/**
 * str_len - returns the length of
 * a string
 *
 * @str: string
 *
 * Return: lenght of str.
 */

int str_len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(str + 1));
	}
}

/**
 * check_palindrome - checks if a string is
 * palidrome
 *
 * @firstChar: index of first character
 * @lastChar: index of last character
 * @str: string
 *
 * Return: 1(str is palindrome) or
 * 0(str is not palindrome)
 */

int check_palindrome(int firstChar, int lastChar, char *str)
{
	if (firstChar >= lastChar)
	{
		return (1);
	}
	else if (str[firstChar] != str[lastChar])
	{
		return (0);
	}
	else
	{
		firstChar += 1;
		lastChar -= 1;
		return (check_palindrome(firstChar, lastChar, str));
	}
}
