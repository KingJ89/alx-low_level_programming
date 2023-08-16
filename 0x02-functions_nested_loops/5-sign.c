#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: checks the number to be checked
 * Return: 1 for positive num, -1 for neg num and 0 for other
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

