#include <stdio.h>
/**
 * print_alphabet_x10 - Prints alphabets times 10
 * Return:
 */
void print_alphabet_x10(void)
{
	char aa;
	int a = 0;

	while (a < 10)
	{
		aa = 'a';
		while (aa <= 'z')
		{
			putchar(aa);
			aa++;
		}
		putchar('\n');
		a++;
	}
}
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
