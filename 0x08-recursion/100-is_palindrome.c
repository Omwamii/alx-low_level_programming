#include "main.h"

/**
 * check - checks string
 * @str: pointer to string
 * @len: string length
 * @i: incrementor
 *
 * return: 1 if palindrome 0 if not
 */

int check(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (check(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * strlength - finds length of string
 * @s: string pointer
 *
 * Return: length
 */

int strlength(char *s)
{
	if (*s != '\0')
		return (1 + strlength(s + 1));

	return (0);
}


/**
 * is_palindrome - checks if string is a palindrome
 * @s: pointer to string
 *
 * Return: 1 if it is 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = strlength(s) - 1;

	return (check(s, length, i));
}
