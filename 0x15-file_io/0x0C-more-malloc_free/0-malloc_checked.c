/*
 * File: 0-malloc_checked.c
 * Auth: Brennan D Baraban
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 *
 * @b: bytes to be allocated
 *
 * Return: Pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

