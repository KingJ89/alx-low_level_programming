#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format
 * @format: A list of types of arguments
 * i: integer
 * f: float
 * s: char* (if the string is NULL, print (nil)
 * c: char
 * any other char should be ignored
 * code by J.Mutewera
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	char *s;

	va_start(args, format);

	while (format && *ptr)
	{
		c = *ptr++;
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}

		if (*ptr)
			printf(", ");
	}

	printf("\n");
	va_end(args);
}

