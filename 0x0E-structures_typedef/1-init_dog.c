#include <stdlib.h>
#include <stdio.h>
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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
int main()
{
	struct dog my_dog;
	init_dog( &my_dog, "GHOST", 3.5, "Kim" );
	printf("%s's dog is %s and is %f years old ", my_dog.owner ,my_dog.name, my_dog.age);
	return 0;
}
