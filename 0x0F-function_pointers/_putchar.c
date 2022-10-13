#include <unistd.h>
/**
 * _putchar - write a character c to the stout
 *
 * @c: character to write/print
 *
 * return: 1 on success.
 * on error, return -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
