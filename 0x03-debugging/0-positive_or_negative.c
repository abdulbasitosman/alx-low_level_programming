#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - is used to check if a number is
 * positive or negative or zero
 * Return: return 0
 */
int positive_or_negative(int n)
{
	
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
