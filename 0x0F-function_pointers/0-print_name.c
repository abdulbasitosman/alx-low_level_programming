#include <unistd.h>

/**
 * print_name -prints a name
 * @name: name to print
 * @f: The character to prit
 */
void print_name(charr *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
