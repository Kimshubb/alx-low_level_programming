#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
  *rename the struct to dog_t
  */
typedef struct dog dog_t;
/**
  *define dog_t structure members
  */
struct dog 
{
  char *name;
  float age;
  char *owner;
};

dog_t *new_dog(char *name, float age, char *owner) {
  dog_t *new_dog = malloc(sizeof(dog_t));
  if (!new_dog) return NULL;
/**
  *create a copy of name and owner strings and allocate memory dynamically 
  */
  new_dog->name = strdup(name);
  if (!new_dog->name)
  {
  	  free(new_dog);
    		return NULL;
  }

  new_dog->age = age;

  new_dog->owner = strdup(owner);
  if (!new_dog->owner) 
  {
  	  free(new_dog->name);
    	  free(new_dog);
    		return NULL;
  }

  return new_dog;
}

