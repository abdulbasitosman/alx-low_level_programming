#include <stdio.h>
/**
 * main - is used to print lowercase alphabet in reverse
 * except q and e using putchar
 * Return: return 0
 */
int main(void)
{
	int n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		if (n == 'a')
			putchar('\n');
		n--;
	}
	return (0);
}
