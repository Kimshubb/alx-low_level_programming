#include<stdlib.h>
#include<stdio.h>
#include<dog.h>
/**function frees dog
  *@d what is freed
  */
void free _dog(dog_t*d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
