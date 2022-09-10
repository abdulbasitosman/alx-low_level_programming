#include <stdio.h>
/**
 * main - is used to print numbers from 0 to 9
 * Return: return 0
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n <= 57; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (n >= m)
				continue;
			for (o = 50; o <= 57; o++)
			{
				if (m >= o)
					continue;
				putchar(n);
				putchar(m);
				putchar(o);
				if (n != 55 || m != 56)
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
