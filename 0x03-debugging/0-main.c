#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
void positive_or_negative(int n);
int main(void)
{
	int test_case = 0;
	printf("testing value:%d\n", test_case);
	positive_or_negative(test_case);
	return (0);
}
/** function implementation*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n",n);

	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative", n);
	}
}
