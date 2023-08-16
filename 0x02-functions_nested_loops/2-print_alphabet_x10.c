#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{

	char jm;
	int i;
	i = 0;
	while (i < 10)
	{
	for (jm = 'a'; jm <= 'z'; jm++)
	{
	_putchar(jm);
	}
	_putchar('\n');
	i++;
	}
}



