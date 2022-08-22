#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: void
 *
 * @n: integer parameter
 */

void print_number(int n)
{
	unsigned int doubles, single, i;

	if (n < 0)
	{
	_putchar(45);
	doubles = n * -1;
	}
	else
	{
		doubles = n;
	}
	single = doubles;
	i = 1;

	while (single > 9)
	{
		single /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((doubles / i) % 10) + 48);
	}
}
