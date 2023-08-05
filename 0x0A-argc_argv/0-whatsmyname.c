#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	    printf("%s\n", argv[0]);
	}
	return (0);
}

