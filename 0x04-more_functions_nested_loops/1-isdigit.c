#include "main.h"

/**
  *_isdigit - checks for a digit frm 0 to 9
  *@c: param
  *
  *Return: 1 if isdigit 0 otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
