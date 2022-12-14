#include<stdio.h>
#include<unistd.h>
#include "main.h"

/**
  *main - entry point
  *Return: zero
  */
int main(void)
{
	char x[] = "_putchar\n";
	_putchar(x);
}

int _putchar(char *c)
{
	return (write(1,&c, 1));
}
