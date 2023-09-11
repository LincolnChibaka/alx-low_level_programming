#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type that defines a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a structure that contains information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
