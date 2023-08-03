#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the bit at the given index to 1
 * @n: pointer to the number
 * @index: index to change
 * Return: 1 if worked and -1 if did not work
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
