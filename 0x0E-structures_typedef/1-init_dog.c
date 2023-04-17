#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a dog struct with given values
 * @d: Pointer to a struct of type of the dog
 * @name: Pointer to a char array that represents the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to a char array that represents the owner of the dog
 *
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
