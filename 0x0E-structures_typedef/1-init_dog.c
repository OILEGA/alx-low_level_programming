#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - is used to initialize a variable
 * of type struct dog.
 * @d: to initialie pointer to struct dog
 * @name: to initialize name
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
