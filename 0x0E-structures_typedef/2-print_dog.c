#include<stdlib.h>
#include<stdio.h>
#include "dog.h"
/**description -function that prints struct dog
  *@d struct to be printed
  */
void print_dog(struct dog *d);
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner ="(nil)";
	printf("Name: %s\n Age:%f\n Owner:%d\n",d->name, d->age, d->owner);
}
