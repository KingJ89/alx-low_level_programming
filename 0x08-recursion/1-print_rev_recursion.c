#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints reverse string according to params
 * @s: reversed string
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);

}
