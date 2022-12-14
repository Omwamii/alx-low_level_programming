#include<stdio.h>
#include<unistd.h>
#include "main.h"

/**
  *main - entry point
  *Return: zero
  */
int main(void)
{
	char x = "_putchar\n";
	int n = sizeof(x);
	write(1,x,n);
}
