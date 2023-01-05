#include "main.h"

/**
 * assist - assists to find sqrt
 * @i: number
 * @j: base num (1)
 *
 * Return: sqrt
 */

int assist(int i, int j)
{
	if (j * j > i)
		return (-1);
	else if (j * j == i)
		return (1);
	else
		return (assist(i, (j + 1)));
}
/**
 *  _sqrt_recursion - prints natural sqrt
 * @n: number to be checked
 *
 * Return: sqrt or -1 if not natural sqrt
 */

int _sqrt_recursion(int n)
{
	 if (n == 0)
		 return (0);
	 else
		 return (helper(n, 1));
}
