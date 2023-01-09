#include <stdio.h>

/**
  *main - entry point
  *@argc: argument count
  *@argv: argument string pointer
  *
  *Return: success value
  */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
