#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct type dog
 * Return: None
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
		
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: ");
	if (d->age != NULL)
		printf("Owner: %.f\n", *d->age);
	else
		printf(" (nil)\n");

}

