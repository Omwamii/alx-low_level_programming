#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_numbers - prints numbers with a separator
  *@separator: a string to separate the numbers
  *@n: number of arguments
  *...: rest of the arguments
  *
  *Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		exit(1);
	else
	{
		va_list args;
		unsigned int i;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));

			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
		printf("\n");

		va_end(args);

	}
}
