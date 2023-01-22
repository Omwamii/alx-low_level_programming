#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
  *print_strings - prints string separated with separator
  *@separator: ptr to string separating strings
  *@n: number of arguments
  *...: rest of the arguments
  *
  *Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
