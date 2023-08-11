#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stdbool.h>


/**
 * isPositiveNumber - Checks if a string contains only positive digits
 * @str: The input string to check
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int isPositiveNumber(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success, 98 on incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3 || !isPositiveNumber(argv[1]) || !isPositiveNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
