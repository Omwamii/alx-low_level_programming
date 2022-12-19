#include "main.h"
#include <stdio.h>

/**
 * main - generate random passwords
 * Return: 0 if success
 */

int main(void)
{
	int pass, sum;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}

	printf("%c", 2722 - sum);

	return (0);
}
