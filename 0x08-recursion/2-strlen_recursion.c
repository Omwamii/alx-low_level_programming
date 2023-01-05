#include "main.h"

/**
 *_strlen_recursion - prints length of string
 *@s: pointer to string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	_strlen_recursion(&s[count + 1]);

	if (s[count] == '\0')
		return (count);

}
