#include "dog.h"
unsigned int _strlen(char *s);
/**
 * *new_dog - function entry
 * Description: A function that creates a new dog
 * @name: name of the dog
 * @age: dog age
 * @owner: dog owner
 * Return: the address to the created object
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, nameL, ownerL;
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL || age < 0 || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	nameL = _strlen(name);
	ownerL = _strlen(owner);

	ptr->owner = malloc(ownerL + 1);
	ptr->name = malloc(nameL + 1);

	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		free(ptr->owner);
	}

	for (i = 0; name[i] != '\0'; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';

	ptr->age = age;

	return (ptr);
}

/**
 * _strlen - function entry
 * Description: A function that returns length of a string
 * @s: a string address
 * Return: the string length
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
