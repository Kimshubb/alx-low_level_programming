#ifndef DOG_H
#define DOG_H
/**
  * dog_t - dog struct containing basic info
  * @name - first member
  * @age - second member
  * @owner - third member
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
