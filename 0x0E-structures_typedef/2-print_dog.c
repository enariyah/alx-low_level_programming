#include "dog.h"
#include <stdio.h>
#include "stdlib.h"
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
