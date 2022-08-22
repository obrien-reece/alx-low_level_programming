#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * Return: void
 *
 * @a: integer variable
 * @b: integer variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
