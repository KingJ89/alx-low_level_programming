#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - code Duplicates Strings
 * @str: the string to be duplicated
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int jm = 0, jm1 = 1;
	char *s;

	if (str == NULL)
	return (NULL);

	while (str[jm1])
	{
	jm1++;
	}
s = malloc((sizeof(char) * jm1) + 1);

if (s == NULL)
	return (NULL);
while (jm < jm1)
{
	s[jm] = str[jm];
		jm++;
}

s[jm] = '\0';
return (s);
}
