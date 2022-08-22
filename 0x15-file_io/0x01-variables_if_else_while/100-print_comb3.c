#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;

	for (second = '0'; second <= '9'; second++)
	{
		for (first = (second + 1); first <= '9'; first++)
		{
		putchar(second);
		putchar(first);
		if (second != '8' || first != '9')
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
