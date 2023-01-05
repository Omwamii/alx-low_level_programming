#include "main.h"

/**
 * _print_rev_recursion - prints reverse of string
 * @s: string pointer
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	_print_rev_recursion(&s[i + 1]);

	if (s[i] == '\0')
	{
		return;
	}

}
