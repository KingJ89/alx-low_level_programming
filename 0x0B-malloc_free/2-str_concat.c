#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string number 1 to concatenate
 * @s2: string number 2 to concatenate
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	d = a + b;
	s = malloc((sizeof(char) * d) + 1);

	if (s == NULL)
	return (NULL);

	b = 0;
	while (c < d)
	{
		if (c <= a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}
		c++;
	}
	s[c] = '\0';
	return (s);
}
