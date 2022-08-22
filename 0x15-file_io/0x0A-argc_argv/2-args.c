#include <stdio.h>

/**
 * main - prints all the arguments it receives
 *
 * @argc: number of command line args
 * @argv: pointer to an array of command line args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
