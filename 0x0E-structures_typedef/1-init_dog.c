#include "dog.h"
/**
 * init_dog - function
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Description: initilize struct
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
