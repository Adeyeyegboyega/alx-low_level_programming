#include "main.h"

/**
 * _islower - for lowercase
 *
 * @c: parameter to be printed
 *
 * Return: 1 if lowercase is detected
 * and 0 when otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
