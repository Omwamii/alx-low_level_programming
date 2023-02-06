#include "main.h"

/**
  *get_endianness - gets endian of machine
  *Return: 0 if big endian, 1 otherwise
  */

int get_endianness(void)
{
	int x = 1;
	char *e = (char*)&x;

	return (*e + '0');
}
