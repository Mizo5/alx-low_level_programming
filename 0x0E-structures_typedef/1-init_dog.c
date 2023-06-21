#include "dog.h"

/**
 * init_dog - Initializes a dog
 * @d: The dog to init
 * @name: The dog's name
 * @age: Dog's age
 * @owner: Owner's name
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
