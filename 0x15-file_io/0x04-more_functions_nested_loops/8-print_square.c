#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square
 *
 * Return: void
 *
 * @size: an integer parameter for the size
 * of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int times = 0, length;

		while (times < size)
		{
			length = 1;

			while (length < size)
			{
				_putchar('#');

				length++;
			}

			_putchar('#');
			_putchar('\n');
			times++;
		}
	}
}
