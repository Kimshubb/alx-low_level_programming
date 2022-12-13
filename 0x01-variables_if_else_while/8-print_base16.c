#include<stdio.h>
/**
 * main -entry point print out all numbers of base 16 in lowercase
 * return 0 success
 */
int main(void)
{
	int num;
	char c = 'a';

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
