#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int x, lengthname, lenowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lengthname = 0; name[lengthname]; lengthname++)
		;

	for (lenowner = 0; owner[lenowner]; lenowner++)
		;

	p_dog->name = malloc(lengthname + 1);
	p_dog->owner = malloc(lenowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (x = 0; x < lengthname; x++)
		p_dog->name[x] = name[x];
	p_dog->name[x] = '\0';

	p_dog->age = age;

	for (x = 0; x < lenowner; x++)
		p_dog->owner[x] = owner[x];
	p_dog->owner[x] = '\0';

	return (p_dog);
}
