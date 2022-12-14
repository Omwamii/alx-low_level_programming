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
	return (0);
}
/**
  *_putchar - writes character c to output
  *@c: char to print
  *Return: 0 on success
  */
int _putchar(char *c)
{
	return (write(1,&c, 1));
}
