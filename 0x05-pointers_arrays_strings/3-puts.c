#include "main.h"

/**
  *_puts - prints string followed by newline to stdout
  *@str: pointer to str
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
