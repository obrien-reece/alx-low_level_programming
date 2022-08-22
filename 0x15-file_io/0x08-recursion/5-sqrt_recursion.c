#include "main.h"

/**
 * root - finds the the square root of n
 *
 * Return: the natural square root
 *
 * @n: integer parameter
 * @r: integer parameter
 */

int root(int n, int r)
{
	if (r * r > n)
	{
		return (-1);
	}
	if (r * r == n)
	{
		return (r);
	}
	return (root(n, r + 1));
}

/**
 * _sqrt_recursion - finds the natural square root
 *
 * Return: the square root
 *
 * @n: integer parameter
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (root(n, 0));
}
