#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints string according to params
 * @s: the string to be printed
 * Return: 0.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
