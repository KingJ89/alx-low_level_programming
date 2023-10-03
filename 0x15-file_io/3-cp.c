#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *jm2);
void close_file(int jm1);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @jm2: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *jm2)
{
	char *jm;

	jm = malloc(sizeof(char) * 1024);

	if (jm == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", jm2);
		exit(99);
	}

	return (jm);
}

/**
 * close_file - Closes file descriptors.
 * @jm1: The file descriptor to be closed.
 */
void close_file(int jm1)
{
	int jm;

	jm = close(jm1);

	if (jm == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", jm1);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int jm, jm1, jm3, jm4;
	char *jm2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	jm2 = create_buffer(argv[2]);
	jm = open(argv[1], O_RDONLY);
	jm3 = read(jm, jm2, 1024);
	jm1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (jm == -1 || jm3 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(jm2);
			exit(98);
		}

		jm4 = write(jm1, jm2, jm3);
		if (jm1 == -1 || jm4 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(jm2);
			exit(99);
		}

		jm3 = read(jm, jm2, 1024);
		jm1 = open(argv[2], O_WRONLY | O_APPEND);

	} while (jm3 > 0);

	free(jm2);
	close_file(jm);
	close_file(jm1);

	return (0);
}

