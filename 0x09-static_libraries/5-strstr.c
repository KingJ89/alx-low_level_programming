#include "main.h"

/**
 * _strstr - Entrypoint
 * @haystack: input value
 * @needle: input
 * Return: always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *jm = haystack;
		char *jm1 = needle;

		while (*jm == *jm1 && *jm1 != '\0')
		{
			jm++;
			jm1++;
		}
		if (*jm1 == '\0')
		return (haystack);
	}
	return (0);
}
