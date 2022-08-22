#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	for (alph = 'A'; alph <= 'Z'; alph++)
	putchar(alph);
	putchar('\n');
	return (0);
}
