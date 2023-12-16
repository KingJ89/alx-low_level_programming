#include "main.h"

/**
 * _strcat - code concatenates two strings into a single
 * @dest: code input value destination
 * @src: input source code
 * Return: 0 on success.
 */

char *_strcat(char *dest, char *src)
{
	int jm;
	int jm1;

	jm = 0;

	while (dest[jm] != '\0')
	{
		jm++;
	}
	jm1 = 0;

	while (src[jm1] != '\0')
{
	dest[jm] = src[jm1];
	jm++;
	jm1++;
}
	dest[jm] = '\0';
	return (dest);
}
