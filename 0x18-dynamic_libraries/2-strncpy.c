#include "main.h"


/**
 * _strncpy - copies strings
 * @dest: input 1
 * @src: input src
 * @n: input result
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jm;

	jm = 0;
	while (jm < n && src[jm] != '\0')
	{
		dest[jm] = src[jm];
		jm++;
	}
	while (jm < n)
	{
		dest[jm] = '\0';
		jm++;
	}
	return (dest);
}
