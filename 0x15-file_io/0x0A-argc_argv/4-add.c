#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of command line args
 * @argv: pointer to an array of command line args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]) == 0)
		{
			j = atoi(argv[i]);

			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * isNumber - checks for an integer
 *
 * @s: string to be checked
 * Return: 0
 */

int isNumber(char s[])
{
	int i = 0;

	if (s[0] == '-')
		i = 1;
	for (; s[i] != 0; i++)
	{
		if (!isdigit(s[i]))
			return (1);
	}
	return (0);
}
