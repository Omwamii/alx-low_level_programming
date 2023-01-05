#include "main.h"

/**
 * divider - divides n with numbers recursively
 * @n: number to be divided
 * @d: divider
 *
 * Return: if divisible ret 1 else 0
 */

int divider(int n, int d)
{
	if (d >= n)
		return (0);

	if (n % d == 0)
		return (1);
	else
		return (divider(n, d + 1));
}
/**
 * is_prime_number - prints if num is prime or not
 * @n: number to be checked
 *
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	else
		return (divider(n, 1));
}

