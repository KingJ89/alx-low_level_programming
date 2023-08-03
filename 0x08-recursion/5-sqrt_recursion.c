#include <stdio.h>
#include "main.h"
#include "math.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the input to be calculated
 * Return: square root
 */

int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the square root recursively
 * @n: input to be calculated
 * @i: number to be iterated
 * Return: square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

