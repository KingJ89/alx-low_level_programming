#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 * Return: Always
 */
int main(int argc, char **argv)
{
	(void)argv;

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

