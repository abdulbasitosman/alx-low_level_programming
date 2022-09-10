#include <stdio.h>
/**
 * main - is used to print lowercase alphabet followed by
 * uppercase and new line using putchar
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		if (n == 'f')
			putchar('\n');
		n++;
	}
	return (0);
}
