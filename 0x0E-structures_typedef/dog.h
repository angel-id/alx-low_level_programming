#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog poppy;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
