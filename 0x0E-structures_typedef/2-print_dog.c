#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog to be printed
 *
 * Description: this function prints the members of the structure
 * pointed by d in the following format:
 * Name: name
 * Age: age
 * Owner: owner
 * If an element of d is NULL, it prints (nil) instead of this
 * element. If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL) /* check if d is a valid pointer */
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age); /* print age */
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
