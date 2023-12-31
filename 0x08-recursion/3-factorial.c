#include <stdio.h>
#include "main.h"

/**
 * factorial - calculates te factorial
 * @n: the number to be calculated
 * Return: int val
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
