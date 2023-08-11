#include "main.h"

/**
 * _strspn - Entrypoint
 * @s: input 1
 * @accept: input 2
 * Return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1])
				return (n);
		}
		s++;
	}
	return (n);
}
