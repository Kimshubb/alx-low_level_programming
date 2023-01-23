#include<stdio.h>
#include"main.h"
/**_putchar writes the character c to std output
  *@c the character to print
  *return on return success 1
  * else -1
  **/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
