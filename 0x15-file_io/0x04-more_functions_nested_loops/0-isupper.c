#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 *
 * Return: 1 if c is uppercase
 * 0 is c is lowercase
 *
 * @c: integer parameter
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
