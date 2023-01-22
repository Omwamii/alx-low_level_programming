#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
  *sum_them_all - prints sum of parameters
  *@n: number of arguments
  *...: actual arguments
  *
  *Return: sum of arguments. if n == 0 ret 0.
  */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	else
	{
		va_list args;
		unsigned int i, sum = 0;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}

		va_end(args);

		return (sum);
	}
}
