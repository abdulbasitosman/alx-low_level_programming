#include <stdio.h>
/**
 * main - is used to print numbers from 0 to 9
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n >= m)
				continue;
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
