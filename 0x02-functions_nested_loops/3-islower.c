#include "main.h"

/**
 * _islower - checks if the characters are lover case
 * @c; the characters are checked
 * Return: 1 for available lower case characters or 0 for else
 */

int _islower(int c)

{
	if(c >= 97 && c <= 12)
	{
		return (1);
	}
	return (0);
}
