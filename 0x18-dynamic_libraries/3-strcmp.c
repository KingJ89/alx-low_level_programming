#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1[jm] - s2[jm]
 */

int _strcmp(char *s1, char *s2)
{
	int jm;

	jm = 0;
	while (s1[jm] != '\0' && s2[jm] != '\0')
	{
		if (s1[jm] != s2[jm])
		{
			return (s1[jm] - s2[jm]);
		}
		jm++;
	}
	return (0);
}
