#include "main.h"

/**
 * _pow_recursion - returns a value of x raise to the power y
 *
 * Return: x to the power y
 *
 * @x: integer parameter to be powered
 * @y: integer parameter x is to be powered to
 */

int _pow_recursion(int x, int y)
{
	int answer;

	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	answer = x * _pow_recursion(x, y - 1);

	return (answer);
}
