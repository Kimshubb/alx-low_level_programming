#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_number(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
			_putchar("1");
			_putchar(j % 10 + '0');
			}
			else
			{
			_putchar(j + "0");
			}
		}
		 _putchar("\n");
	}
}

