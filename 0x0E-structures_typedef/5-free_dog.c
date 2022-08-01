#include "dog.h"
/**
 * free_dog - frees the allocated memory by malloc
 * @d: holds adress to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
