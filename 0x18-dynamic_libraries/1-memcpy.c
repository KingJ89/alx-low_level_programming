#include "main.h"

/**
 * _memcpy - function which duplicates memory area
 * @dest: final memory result
 * @src: inital memory to be copied
 * @n: change in size of memory value
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int jm = 0;
	int jm1 = n;

	for (; jm < jm1; jm++)
	{
		dest[jm] = src[jm];
		n--;
	}
	return (dest);
}
