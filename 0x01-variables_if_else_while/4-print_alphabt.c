#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main task 4
 * Retuur: Always 0(success)
 */

int main(void)

{
	char jm, e, q;

	e = 'e';
	q = 'q';

	for (jm = 'a'; jm <= 'z'; jm++)
	{
	if (jm != e && jm !=q)
		putchar(jm);
	}
	putchar('\n');
	return (0);
}
