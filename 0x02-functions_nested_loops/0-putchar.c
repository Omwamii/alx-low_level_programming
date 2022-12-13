#include<stdio.h>
#include<unistd.h>
#include "main.h"

/**
  *main - entry point
  *Return: zero
  */
int main(void)
{
	char x = "_putchar";
	write(1,x,8);
	write(1,'\n',2);
}
