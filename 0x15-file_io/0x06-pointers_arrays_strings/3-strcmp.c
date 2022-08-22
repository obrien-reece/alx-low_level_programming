#include "main.h"

/**
 * _strcmp - compares to strings
 *
 * Return: an integer
 *
 * @s1: a character parameter
 * @s2: a character parameter
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
