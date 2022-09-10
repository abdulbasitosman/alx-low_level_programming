#include <stdio.h>
/**
 * main - is used to print numbers from 0 to 9 using putchar only
 * Return: return 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
