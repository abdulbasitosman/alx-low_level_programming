#include <stdio.h>
/**
 * main - is used to print lowercase alphabet followed by
 * uppercase and new line using putchar
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		if (n == 'Z')
			putchar('\n');
		n++;
	}
	return (0);
}
