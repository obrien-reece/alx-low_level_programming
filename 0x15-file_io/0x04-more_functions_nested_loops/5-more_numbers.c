#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 0 to 14
 * ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	char i;
	int times;

	for (times = 1; times <= 10; times++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
