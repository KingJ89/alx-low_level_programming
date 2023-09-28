#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: pointer to be changed
 * @index: index
 * Return: 1 for success, 2 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (2);

	*n = (~(1UL << index) & *n);
	return (1);
}
