#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns string length
 *
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * _strdup - returns a pointer to an allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be copied
 *
 * Return: copied string
 */

char *_strdup(char *str)
{
	char *copy, *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_strlen(str) + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	_copy = copy;

	while (*str)
	{
		*_copy = *str;
		str++;
		_copy++;
	}
	*_copy = '\0';
	return (copy);
}
