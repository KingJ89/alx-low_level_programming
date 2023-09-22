#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print contents to output
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print.
 * Return: The number of bytes read and printed (jm_written).
 *         0 when the function fails or jm_filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int jm_fd;
	ssize_t jm_written;
	char *jm_buf;
	ssize_t jm_total_read;

	if (!filename)
		return (0);

	jm_fd = open(filename, O_RDONLY);
	if (jm_fd == -1)
		return (0);

	jm_buf = malloc(sizeof(char) * letters);
	if (!jm_buf)
	{
		close(jm_fd);
		return (0);
	}

	jm_total_read = read(jm_fd, jm_buf, letters);
	if (jm_total_read == -1)
	{
		free(jm_buf);
		close(jm_fd);
		return (0);
	}

	jm_written = write(STDOUT_FILENO, jm_buf, jm_total_read);

	free(jm_buf);
	close(jm_fd);

	return (jm_written);
}
