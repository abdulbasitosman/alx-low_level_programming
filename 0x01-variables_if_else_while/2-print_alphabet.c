#include <stdio.h>
/**
 * main - is used to print lowercase alphabet using putchar
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		if (n == 'z')
			putchar('\n');
		n++;
	}
	return (0);
}
