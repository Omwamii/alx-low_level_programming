#include "main.h"

/**
  *set_bit - sets bit of a number at certain index
  *@n: number passed
  *@index: index intended to be set
  *
  *Return: 1 if set -1 if error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n > 53 || !n)
		return (-1);

	(*n |= 1 << index);
	return (1);
}
