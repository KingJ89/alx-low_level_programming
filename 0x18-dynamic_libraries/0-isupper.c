#include "main.h"

/**
 * _isupper - changes lowercase to uppercase letters
 * @c: character to be checked.
 * Return: 1 on success and -1 on error
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (-1);
}
