#include "dog.h"

/**
 * init_dog - function entry
 * Description: A unction that initialize a variable of type struct dog
 * @d: address of the dig type
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 * Return: the land of nothing!
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
