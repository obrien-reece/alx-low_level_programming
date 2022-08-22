#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * Return: void
 *
 * @s: The actual string
 * @to: Where the string it to be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
