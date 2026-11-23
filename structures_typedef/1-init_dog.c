#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: the dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
