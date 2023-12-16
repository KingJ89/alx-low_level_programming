#include <stdio.h>
#include "main.h"

#include "100-operations.h"

/**
 * add - adds two integers together.
 * @a: first integer.
 * @b: second integer.
 * Return: Sum.
 */

int add(int a, int b)
{
	return (a + b);
}


/**
 * sub - subtracts two integers.
 * @a: first int
 * @b: second int 
 * Return: difference.
 */

int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - multiplies two integers.
 * @a: integer 1
 * @b: integer 2
 * Return: result of multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * div - divides 2 integers
 * @a: int 1
 * @b: int 2
 * Return: result of division.
 */

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error: division by zero are you ok today\n");
		return (0);
	}
}



/**
 * mod - computes the remainder of division
 * @a: int 1
 * @b: int 2
 * Return: remainder of division.
 */

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		printf("Error: Modulo by Zero are you ok today");
		return (0);
	}
}
