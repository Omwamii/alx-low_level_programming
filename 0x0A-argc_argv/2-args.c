#include <stdio.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: arg string array pointer
  *
  *Return: sucess value
  */

int main(int argc, char **argv)
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
