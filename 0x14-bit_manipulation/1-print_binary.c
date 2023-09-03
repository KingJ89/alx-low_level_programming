#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints binary equal to decimal number
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int jm, num = 0;
	unsigned long int jm1;

	for (jm = 63; jm >= 0; jm--)
	{
		jm1 = n >> jm;

		if (jm1 & 1)
		{
			putchar('1');
			num++;
		}
		else if (num)
			putchar('0');
	}
	if (!num)
		putchar('0');
}

