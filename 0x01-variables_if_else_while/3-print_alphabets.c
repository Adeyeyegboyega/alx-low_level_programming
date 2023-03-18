#include <stdio.h>

/**
 * main - main function
 *
 * Retun: always 0
 */

int main(void)
{
	char t;

	for (t = 'a' ; t <= 'z' ; t++)
		putchar(t);
	for (t = 'A' ; t <= 'Z' ; t++)
		putchar(t);
	putchar('\n');
	return (0);
}
