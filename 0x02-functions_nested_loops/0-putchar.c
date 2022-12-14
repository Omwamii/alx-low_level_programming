#include<stdio.h>
#include<unistd.h>
#include "main.h"

/**
  *main - entry point
  *Return: zero
  */
int main(void)
{
	char x[] = "_putchar";

	_putchar(x);
	write(1,'\n',2);
	return (0);
}
