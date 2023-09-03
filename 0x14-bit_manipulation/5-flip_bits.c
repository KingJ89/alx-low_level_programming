#include "main.h"

/**
 * flip_bits - counts number bits to be changed
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int jm, num = 0;
	unsigned long int jm1;
	unsigned long int jm2 = n ^ m;

	for (jm = 63; jm >= 0; jm--)
	{
		jm1 = jm2 >> jm;
		if (jm1 & 1)
			num++;
	}

	return (num);
}

