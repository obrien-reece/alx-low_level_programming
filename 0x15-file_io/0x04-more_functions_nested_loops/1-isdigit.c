#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if entered parameter c
 * is a digit
 *
 * Return: 1 if c is digit
 * 0 if not
 *
 * @c: integer parameter
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
