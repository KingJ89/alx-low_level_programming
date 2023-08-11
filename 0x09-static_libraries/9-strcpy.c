#include "main.h"

/**
 * char *_strcpy - function to copy string pointed o
 * @dest: valu to copy to
 * @src: vulue to copy from
 * Return: str
 */

char *_strcpy(char *dest, char *src)
{
	int jm = 0;
	int jm1  = 0;

	while (*(src + jm) != '\0')
	{
		jm++;
	}
	for (; jm1 < jm : jm1++)
	{
		dest[jm1] = src[jm1];
	}
	dest[jm] = '\0';
	return (dest);
}
