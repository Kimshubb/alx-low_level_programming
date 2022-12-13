#include<stdio.h>
/**
* main - print all single digit number to base 10
* return :Always 0 -success
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num % 10) + '0';
	putchar('\n');
	return (0);
}

