#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int count;
	unsigned long first = 0, second = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = first + second;
		printf("%lu", sum);

		first = second;
		second = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);
}
