#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if the function fails
 *
 * Description: this function allocates memory for a new dog and copies
 * the values of name and owner to its members
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog; /* declare a pointer to the new dog */
	char *new_name; /* declare a pointer to the copy of name */
	char *new_owner; /* declare a pointer to the copy of owner */

	if (name == NULL || owner == NULL) /* check if name or owner is NULL */
		return (NULL);

	new_dog = malloc(sizeof(dog_t)); /* allocate memory for the new dog */
	if (new_dog == NULL) /* check if allocation failed */
		return (NULL);

	new_name = strdup(name); /* allocate and copy name */
	if (new_name == NULL) /* check if allocation failed */
	{
		free(new_dog); /* free the new dog */
		return (NULL);
	}

	new_owner = strdup(owner); /* allocate and copy owner */
	if (new_owner == NULL) /* check if allocation failed */
	{
		free(new_name); /* free the copy of name */
		free(new_dog); /* free the new dog */
		return (NULL);
	}

	new_dog->name = new_name; /* assign new_name to the member name */
	new_dog->age = age; /* assign age to the member age */
	new_dog->owner = new_owner; /* assign new_owner to the member owner */

	return (new_dog); /* return the pointer to the new dog */
}
