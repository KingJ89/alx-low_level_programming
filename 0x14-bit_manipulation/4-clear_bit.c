#include "main.h"

/**
 * clear_bit - sets the value of bit to 0
 * @n: pointer to be changed
 * @index: index
 * Return: 1 for success, 2 for failure
 */

int clear_bit(unsigned long int *jm, unsigned int jm1)

{
	if (jm1 > 63)
		return (2);

	*jm = (~(1UL << jm1) & *jm);
	return (1);
}
