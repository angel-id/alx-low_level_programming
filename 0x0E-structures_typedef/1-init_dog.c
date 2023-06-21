#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variable of type struct dog
 * @name: name of dog
 * @d: pointer to type struct
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
