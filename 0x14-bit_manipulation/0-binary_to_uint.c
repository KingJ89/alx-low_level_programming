#include "main.h"

/**
 * binary_to_uint - converts binary number
 * @b: string with the binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{

	int jm;
	unsigned int jm1 = 0;

	if (!b)
		return (0);

	for (jm = 0; b[jm]; jm++)
	{
		if (b[jm] < '0' || b[jm] > '1')
			return (0);
		jm1 = 2 * jm1 + (b[jm] - '0');
	}

	return (jm1);
}

