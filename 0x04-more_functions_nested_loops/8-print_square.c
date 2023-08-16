#include "main.h"

/**
 * print_square - draws a diagonal line according to params
 * @n: the number of times to print diagonal lines.
 * Return: Empty
 */

void print_square(int n)

{
	int x, y;

	if (n <=0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
