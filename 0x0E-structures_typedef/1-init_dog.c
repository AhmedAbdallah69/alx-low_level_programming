#include "dog.h"
/**
 * init_dog - function to initialize the structure dog.
 * @d: pointer the structure instance.
 * @name: name to be assigned in the structure.
 * @age: age to be assigned in the structure.
 * @owner: owner name to be assigned in the structure.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
	}
}
