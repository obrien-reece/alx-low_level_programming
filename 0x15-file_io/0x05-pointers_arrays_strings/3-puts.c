#include "main.h"

/**
 * _puts - Prints a string foolowed by a
 * new line
 *
 * Return: void
 *
 * @str: a character parameter
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
