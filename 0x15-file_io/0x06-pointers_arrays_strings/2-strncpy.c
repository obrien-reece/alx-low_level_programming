#include "main.h"

/**
 * _strncpy - copies a string
 *
 * Return: a character
 *
 * @dest: a character parameter
 * @src: a character parameter
 * @n: a character parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
