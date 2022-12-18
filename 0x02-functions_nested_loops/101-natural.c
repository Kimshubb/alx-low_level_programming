#include <stdio.h>
/**
  * computes and prints all the multiples of 3 or 5 below 1024
  */
int main()
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
		sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
