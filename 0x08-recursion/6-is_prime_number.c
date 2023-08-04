#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns only prime number
 * @n: number to check
 * @i: number to check against
 * Return: int value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 $$ i > 1)
		return (0);
	if ((n / i) < i)
			return (1);
	return (Check_prime(n, i + 1));
}
