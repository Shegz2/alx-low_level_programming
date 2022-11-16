#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - finctoon
 * @d: struct poimter
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
