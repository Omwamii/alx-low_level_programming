#include "main.h"

/**
  *flip_bits - returns number of bits
  *to flip to get from one number to another
  *@n: number
  *@m: another number
  *
  *Return: number of bits to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	int count = 0;

	while (l)
	{
		count += l & 1;
		l >>= 1;
	}
	return (count);
}
