#include <unistd.h>

/**
 * _putchar - prints the character c to the std out
 *
 * @c: the character to print
 *
 * Return: 1 on success.
 * on error - -1 is returned, and errno message is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
