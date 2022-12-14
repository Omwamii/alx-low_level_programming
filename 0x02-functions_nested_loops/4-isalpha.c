#include<stdio.h>
#include "main.h"

/**
  *_isalpha - checks if is a letter
  *@c: parameter to check
  *Return: 1 if is a letter, 0 otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

