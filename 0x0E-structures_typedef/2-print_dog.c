#include<stdlib.h>
#include<stdio.h>
#include "dog.h"
/**description -function that prints struct dog
  *@d struct to be printed
  */
void print_dog(struct dog *d) 
{

	if (!d) return;

	printf("Name:%s\n", d->name ? d->name : "nil");
	printf("Age: %s\n", d->age >= 0 ? "" : "nil");
	printf("Owner: %s\n", d->owner ? d->owner : "nil");
}

