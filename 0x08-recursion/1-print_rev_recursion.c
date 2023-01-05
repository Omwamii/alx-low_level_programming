#include "main.h"

/**
 * _print_rev_recursion - prints reverse of string
 * @s: string pointer
 */

void _print_rev_recursion(char *s)
{
	int i = 1;
	
	if (s[i] == '\0'|| i >= 0)
	{
		_putchar(s[i]);
		_print_rev_recursion(&s[i - 1]
	}

	if (i < 0)
	{
		return;
	}

}
