#include<stdio.h>
/**
  * main - print all combinations of a single digit
  *return 0 success
  */
int main(void)
{
	int number;

	for (number = 0; number <= 9;)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(' ');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
