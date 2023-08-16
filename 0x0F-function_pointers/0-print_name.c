#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

/**
 * print_normal - Prints the name normally.
 * @name: The name to be printed.
 *
 * Description: This function prints the name in the normal format.
 */
void print_normal(char *name)
{
	if (name != NULL)
	{
		printf("Hello, my name is %s.\n", name);
	}
}

/**
 * print_reversed - Prints the name in reversed order.
 * @name: The name to be printed.
 *
 * Description: This function prints the name in reverse order.
 */
void print_reversed(char *name)
{
	if (name != NULL)
	{
		int i = strlen(name) - 1;

		printf("My name in reverse is ");
		while (i >= 0)
		{
			printf("%c", name[i]);
			i--;
		}
		printf(".\n");
	}
}

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
