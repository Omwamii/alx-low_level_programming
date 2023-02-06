#include "main.h"

/**
  *get_bit - gets bit at a certain index
  *@n: number
  *@index: index to check for bit
  *
  *Return: the bit value or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);

	return (n & (1 << index));
}
