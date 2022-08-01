#ifndef DOG_H
#define DOG_H
/**
 * struct dog - simple structrure
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: this struct function is used to store name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
