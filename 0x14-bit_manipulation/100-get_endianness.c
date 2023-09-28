#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks if a machines size of endian
 * Return: 1 for big, -1 for small
 */

int get_endianness(void)
{
	unsigned int jm = -1;
	char *jm1 = (char *) &jm;

	return (*jm1);
}
