#include <stdio.h>
/**
 * main - is used to print numbers from 1 to 9 sperated by ,
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
