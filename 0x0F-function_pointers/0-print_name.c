#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name- print name using a function pointer
  * @name -string to add
  * @f - pointer to function
  * return - nothing
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
