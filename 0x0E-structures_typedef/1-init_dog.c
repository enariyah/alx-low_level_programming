#include "dog.h"
/**
 * init_dog - intializes a variable of type struct dog
 * @d: address of my_dog
 * @name: character to be initialized
 * @age: float to be initialized
 * @owner: character to be initialized
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
