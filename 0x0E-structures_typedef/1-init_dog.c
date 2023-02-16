#include "dog.h"
/**
  * init_dog - initializess a varible of type struct dog
  *@d - pointer to struct dog to initialize
  *@name -name initialized
  *@age - age initialized 
  *@owner - owner initialized 
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d ->name = name;
		d->age = age;
		d->owner = owner;
	}
}
