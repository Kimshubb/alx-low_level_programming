#include<stdio.h>
/**
* main - print all alphabet in lowercase in reverse
* return 0 success
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
