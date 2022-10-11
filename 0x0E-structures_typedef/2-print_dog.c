#include <stdio.h>
#include "main.h"

/**
 * print_dog - print the variable in dog struct
 * @d: dog struct
 */

void print_init(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner"(nil)";

	printf("name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);

	retturn (1);
}
