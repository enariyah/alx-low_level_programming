#include "dog.h"
/**
 * new_dog - creates new dog function
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
