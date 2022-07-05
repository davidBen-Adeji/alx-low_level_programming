#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializes variable of type struct dog
* @d: variable to be initialized
* @name: name of dog
* @age: age of dog
* @owner: name of its owne
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
