#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int number;
	int total = 0;

	for (number = 0; number < 1024; number++)
	if ((number % 3 == 0) || (number % 5 == 0))

	total = total + number;
	printf("%d\n", total);

	return (0);
}
