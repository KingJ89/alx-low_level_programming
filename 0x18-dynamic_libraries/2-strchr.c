#include "main.h"

/**
 * _strchr - entry point
 * @s: input 1
 * @c: input 2
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int jm = 0;

	for (; s[jm] >= '\0'; jm++)
	{
		if (s[jm] == c)
			return (&s[jm]);
}
	return (0);
}
