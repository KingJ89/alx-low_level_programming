#include "main.h"

/**
 * _islower -Verifies lowercase characters
 * @c: input character
 * Return: 1if c is lowercase, and -1 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'Z');
}
