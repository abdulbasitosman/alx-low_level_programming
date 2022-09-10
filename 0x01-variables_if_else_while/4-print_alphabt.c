#include <stdio.h>
/**
 * main - is used to print lowercase alphabet
 * except q and e using putchar
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		if ((n == 'q') || (n == 'e'))
		{
			n++;
			continue;
		}
		putchar(n);
		if (n == 'z')
			putchar('\n');
		n++;
	}
	return (0);
}
