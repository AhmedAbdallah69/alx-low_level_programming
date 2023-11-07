#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure about info of a dog.
 *
 * @name: its name.
 * @age: its age.
 * @owner: its owner.
 *
 * Description: No longer Description.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
