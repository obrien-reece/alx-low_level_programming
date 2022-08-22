#include "main.h"

/**
 * compare - compares the string
 *
 * Return: 1 if palindrome, 0 if not
 *
 * @i: left of string
 * @j: right of string
 */

int compare(char *i, char *j)
{
	if (i >= j)
	{
		return (1);
	}
	if (*i == *j)
	{
		return (compare(i + 1, j - 1));
	}

	return (0);
}

/**
 * _strlen - return the length of a string
 *
 * Return: string length
 *
 * @s: the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - checks if string is a palindrome
 *
 * Return: 1 is palindrome, 0 if not
 *
 * @s: the string
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (compare(s, (s + length - 1)));
}
