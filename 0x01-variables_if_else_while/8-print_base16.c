#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: return always 0
 */
int main(void)

{
	int jm;
	char jm1;
	{
		for (jm = 0 ; jm < 10 ; jm++)
			putchar(jm + '0');
	}
	{
		for (jm1 =  'a' ; jm1 <= 'f' ; jm1++)
			putchar(jm1);
	}
	putchar('\n');
	return (0);
}
