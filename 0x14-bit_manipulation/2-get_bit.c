#include "main.h"

/**
 * get_bit - returns a bit at an index in a decimal number
 * @n: number to be searched according to params
 * @index: the bit index
 *
 * Return: bit value wich is jm
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int jm;
	{
	if (index > 63)
		return (-1);

	jm = (n >> index) & 1;
	}
	return (jm);
}
