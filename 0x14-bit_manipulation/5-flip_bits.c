#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1;
 * @m: number 2;
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned long int f_num;
      	f_num= n ^ m;
	bits = 0;
	while (c_num > 0)
	{
		if ((f_num & 1) != 0)
		bits++;
		f_num = f_num >> 1;
	}
	return (bits);
}
