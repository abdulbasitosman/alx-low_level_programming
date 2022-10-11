#include <stdio.h>
#include "main.h"


/**
 * init_dog - to be used to initiate the dog struct
 * @d: a dog struct
 * @name : pointer to the dog name variable
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
