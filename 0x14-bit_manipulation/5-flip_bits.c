#include "main.h"

/**
  *countset - counts set bits
  *@n : passed result
  *
  *Return: set bits
  */

int countset(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
  *flip_bits - returns number of bits you need to flip
  *to get from one number to another
  *@n: number
  *@m: another number
  *
  *Return: number of bits to be flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countset(n ^ m));
}
