#include "main.h"
#include <unistd.h>
/**
  * main - print _putchar followed by a new line
  *return  0 success
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
