#include "function_pointers.h"

/**
 * print_name - prints out a name
 *
 * @name: character parameter
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
