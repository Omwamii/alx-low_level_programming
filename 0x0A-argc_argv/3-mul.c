#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *main - entry point
  *@argc: arg count
  *@argv: pointer to arg strings
  *
  *Return: success result
  */

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		int mult = 1;
		int i;

		for (i = 1; i < argc; i++)
		{
			mult *= atoi(*(++argv));
		}

		printf("%d\n", mult);

		return (0);
	}

	else
	{
		printf("Error\n");

		return (1);
	}
}
