#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes charactersnto the shandard output
 * @c: the character tobe written
 * Return: on success, return character written.
 * on error, returns -1 and sets err.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
