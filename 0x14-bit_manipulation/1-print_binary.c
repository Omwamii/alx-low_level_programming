#include "main.h"

/**
  *print_binary - prints binary representaion
  *@n: number to be converted
  *
  *Return: nothing
  */

void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;

	while (mask > 0)
	{
		if ((mask & n) == 0)
			_putchar('0');
		else
			_putchar('1');
		mask >>= 1;
	}

}
