#include "main.h"

/**
 * print_line - draws a line in the terminal
 *
 * Return: void
 *
 * @n: integer parameter, the length of the line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int times = 0;

		while (times < n)
		{
			_putchar('_');
			times++;
		}
		_putchar('\n');
	}
}
