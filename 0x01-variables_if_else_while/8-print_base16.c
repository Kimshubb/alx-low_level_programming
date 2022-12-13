#include<stdio.h>
/**
 * main -entry point print out all numbers of base 16 in lowercase
 * return 0 success
 */
int main(void)
{
	int num;
	int la;

	for (num = 0); num < 10; num++)
		putchar((num % 10) + 10)+ '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);
}
