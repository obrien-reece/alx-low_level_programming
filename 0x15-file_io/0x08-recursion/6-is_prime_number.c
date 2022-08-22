#include "main.h"

/**
 * is_prime - checks for prime numbers
 *
 * Return: 1 if prime and 0 if not
 *
 * @n: an integer parameter
 * @divisor: integer variable
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - finds the prime number
 *
 * Return: the prime number
 *
 * @n: integer variable
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (is_prime(n, divisor));
}
