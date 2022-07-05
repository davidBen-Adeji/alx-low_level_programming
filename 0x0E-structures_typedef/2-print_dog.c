#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* print_dog - function to print sruct dog
* @d: name of variable
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
