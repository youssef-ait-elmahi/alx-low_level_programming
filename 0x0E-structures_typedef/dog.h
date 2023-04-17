#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - new type dog_t as a new name for the type struct dog.
*/
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
