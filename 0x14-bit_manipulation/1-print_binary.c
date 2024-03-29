#include "main.h"
/**
* prt_binary_rec - Prints the binary representation of a number.
* @n: Number to print.
*/

void prt_binary_rec(unsigned long int n)
{
	short int bn;
	if (n != 0)
	prt_binary_rec(n >> 1);
	bn = n & 1;
	_putchar(bn + '0');	
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to print.
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
	prt_binary_rec(n);
	else
	_putchar('0');
}
