#include "main.h"

/**
 * _isupper - functions for uppercase
 *
 * @c: set parameter
 * Return: 0, 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
