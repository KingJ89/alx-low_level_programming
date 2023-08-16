#include "main.h"

/**
 * more_numbers prints 10 lines the param 0 - 14
 * Return: 10 times the param
 */

void more_numbers(void)
{
	int x, y;
	
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
	if (y > 9)
	{
		_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
