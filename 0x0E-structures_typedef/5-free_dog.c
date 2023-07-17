#include "dog.h"

/**
 * free_dog - function entry
 * Description: A function that frees dogs
 * @d: the dog home
 * Return: See nothing!
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
