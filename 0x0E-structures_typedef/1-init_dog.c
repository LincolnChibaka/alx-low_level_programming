#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the variable to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: this function assigns the values of name, age, and
 * owner to the members of the structure pointed by d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) /* check if d is a valid pointer */
		return;
	d->name = name; /* assign name to the member name */
	d->age = age; /* assign age to the member age */
	d->owner = owner; /* assign owner to the member owner */
}
