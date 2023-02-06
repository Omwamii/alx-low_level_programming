#include "main.h"

/**
  *print_binary - prints binary representaion
  *@n: number to be converted
  *
  *Return: nothing
  */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	(n & 1) ? _putchar('1') : _putchar('0');
}
