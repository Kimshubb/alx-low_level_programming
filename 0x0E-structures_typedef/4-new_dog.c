#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function creates a new dog
 * @name - dogs name
 * @owner - owners name
 * @age - dogs name
 * @return new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new_dog;

	for (i = 0 ; name[i]; i++);
	for (j = 0 ; owner[j]; j++);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(i + 1);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		new_dog->name[i] = name[i];
	new_dog->name[i] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(j + 1);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j] = '\0';
	return (new_dog);
}
