#include "main.h"

/**
 * print_last_digit - we print last
 *
 * @f: function parameter
 * Return: h
 */

int print_last_digit(int f)
{
	int h;

	h = f % 10;
	if (f < 0)
		h = -h;
	_putchar(h + '0');
	return (h);
}
