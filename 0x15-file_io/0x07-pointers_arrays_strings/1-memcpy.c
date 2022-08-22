#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * Return: pointer to dest
 *
 * @dest: character parameter
 * @src: character parameter
 * @n: integer parameter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
