#include "main.h"

/**
 * print_alphabet_x10 - making it ten
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int y;
	char z;

	for (y = 1 ; y <= 10 ; y++)
	{
		for (z = 'a' ; z <= 'z' ; z++)
			_putchar(z);
		_putchar('\n');
	}
}
