#include<stdlib.h>
#include<stdio.h>
#include "dog.h"
/** @frees_dog -FREES EMEMORY ALLOCATED FRO STRUCT DOG
  * @d POINTER TO STRUCT DOG(what is freed)
  * @RETURN VOID
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
