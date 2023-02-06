#include "main.h"

/**
  *clear_bit - sets certain bit index to 0
  *@n: passed number
  *@index: index intended to be set
  *
  *Return: 1 if set, -1 if error
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
