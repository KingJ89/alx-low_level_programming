#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int jm, jm1, jm2 = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (jm2 = 0; text_content[jm2];)
			jm2++;
	}

	jm = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (jm == -1)
		return (-1);

	jm1 = write(jm, text_content, jm2);
	if (jm1 == -1)
	{
		close(jm);
		return (-1);
	}

	close(jm);

	return (1);
}
