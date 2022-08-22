#include "main.h"
/**
 * times_table - prints out the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i = 0, k;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			k = j * i;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
