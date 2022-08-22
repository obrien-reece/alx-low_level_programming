#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * Return: String length
 *
 * @s: character parameter
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}
