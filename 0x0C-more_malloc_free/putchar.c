#include <unistd.h>

/**
 * _putchar - writes the character to standard output
 * @c: the character to be printed
 * Return: on success 1.
 * on failure: -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
