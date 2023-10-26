#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: pointer
 * @index: index bit to set to 1
 *
 * Return: 0 for success, 1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
