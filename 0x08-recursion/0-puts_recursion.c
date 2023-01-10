#include "main.h"
/**
  * prints a string followed by a new line
  */
void_puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
