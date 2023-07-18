#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the allocated memory for a struct dog object
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
