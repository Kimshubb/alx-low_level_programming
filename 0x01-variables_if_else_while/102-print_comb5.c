#include<stdio.h>
/**
  * main - print all combinations of two 2 digit numbers
  *return 0 success
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar(i / 10 + '0');
				putchar(i %10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i * 100 + j != 9899)
				{
					putchar(' ');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
