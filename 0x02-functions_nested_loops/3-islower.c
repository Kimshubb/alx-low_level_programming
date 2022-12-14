#include "main.h"
/**
  * a functions that checks for alphabetic order ie lowercase
  * return 1 if c is lowercase else return 0
  */

int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
