#include "main.h"

/**
 *_strlen_recursion - prints length of string
 *@s: pointer to string
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
