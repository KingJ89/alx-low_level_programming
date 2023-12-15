#include "main.h"

/**
 * _strlen - computes length of string
 * @s: the string to br computed
 * Return: length of string
 */
int _strlen(char *s)
{
	int longjm = 0;

	while (*s != '\0')
	{
		longjm++;
		s++;
	}
	return (longjm);
}
