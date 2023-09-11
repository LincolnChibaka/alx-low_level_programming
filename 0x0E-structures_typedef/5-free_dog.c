#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: a pointer to the dog to be freed
 *
 * Description: this function frees the memory allocated for the
 * dog and its members name and owner
 */
void free_dog(dog_t *d)
{
	if (d == NULL) /* check if d is a valid pointer */
		return;
	free(d->name); /* free the memory allocated for name */
	free(d->owner); /* free the memory allocated for owner */
	free(d); /* free the memory allocated for the dog */
}
