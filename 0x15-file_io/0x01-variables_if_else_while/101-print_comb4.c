#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single;
	int doubl;
	int tri;

	for (tri = '0'; tri <= '9'; tri++)
	{
		for (doubl = (tri + 1); doubl <= '9'; doubl++)
		{
			for (single = (doubl + 1); single <= '9'; single++)
			{
				putchar(tri);
				putchar(doubl);
				putchar(single);
				if (tri != '7' || doubl != '8' || single != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
