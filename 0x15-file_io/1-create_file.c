#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: A pointer to the name of the file to append to.
 * @text_content: A pointer to the string to append to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int jm, jm1, jm2 = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (jm2 = 0; text_content[jm2]; jm2++)
			;
	}

	jm = open(filename, O_WRONLY | O_APPEND);
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

