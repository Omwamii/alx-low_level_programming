#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate random passwords
 * Return: 0 if success
 */

int main(void)
{
	int r = 0, c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
