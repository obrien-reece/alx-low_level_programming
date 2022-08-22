#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * if the number is negative, we return 1, and if the
 * number if 0 we return a 0
 *
 * Return: factorial of the given number
 *
 * @n: an integer parameter for the given number
 */

int factorial(int n)
{
	int a;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	a = n * factorial(n - 1);
	return (a);
}
