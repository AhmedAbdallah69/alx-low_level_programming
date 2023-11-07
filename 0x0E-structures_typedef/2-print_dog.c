#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to print the values of the structure dog.
 *
 * @d: pointer the structure instance.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).owner == NULL)
		d->owner = "(nil)";

	if ((*d).name == NULL)
		d->name = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
