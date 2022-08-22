#include "main.h"

/**
 * sub_match - checks if string after wildcard matches
 *
 * Return: 1 if mathed, 0 if nor
 *
 * @s1: character parameter
 * @s2: character parameter
 * @after: character parameter
 */

int sub_match(char *s1, char *s2, char *after)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (sub_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (sub_match(s1, s2 + 1, s2 + 1));
	}
	if (*s1 == *s2)
	{
		return (sub_match(s1 + 1, s2 + 1, after));
	}
	else
	{
		return (sub_match(s1 + 1, after, after));
	}
}

/**
 * wildcmp - compares two strings
 *
 * Return: 1 if strings are identical, 0 if not
 *
 * @s1: the first string
 * @s2: the second string
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (sub_match(s1, (s2 + 1), (s2 + 1)));
	}
	else
	{
		return (0);
	}
}
