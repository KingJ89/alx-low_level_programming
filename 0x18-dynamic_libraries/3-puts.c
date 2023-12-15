#include "main.h"

/**
 * _puts - Rntrypoint
 * Return: always 0 (success)
 * @str: string input
 */
void _puts(char *str)
{
	int jm = 0;

	while (str[jm])
	{
		_putchar(str[jm]);
		jm++;
	}
	_putchar('\n');
}
