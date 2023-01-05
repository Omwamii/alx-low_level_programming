#include "main.h"

/**
 *_strlen_recursion - prints length of string
 *@s: pointer to string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (s[count] == '\0')
		return (count);
	else
		return (0 + _strlen_recursion(&s[i + 1]));

}
