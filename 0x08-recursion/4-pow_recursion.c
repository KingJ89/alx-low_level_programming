#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - prints x raised to the power y
 * @x: input 1
 * @y: input 2
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	return (x * _pow_recursion(x, y - 1));
}
