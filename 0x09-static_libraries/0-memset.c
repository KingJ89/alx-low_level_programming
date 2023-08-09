#include "main.h"

/**
 * _memset - Used to reserve a block of memory with a specific value
 * @s: initial address in memory
 * @b: desired memory value
 * @n: amount of memory incread or decreased by
 * Return: array of amount of memory change and @n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int jm = 0;

	for (; n > 0; jm++)
	{
		s[jm] = b;
		n--;
	}
	return (s);
}
