#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: The character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returnd
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
