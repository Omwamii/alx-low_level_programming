#include "main.h"
#include <stdio.h>

/**
  *_isupper - checks if uppercase
  *@c: char to be checked
  *Return: 1 if uppercase, 0 if otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
