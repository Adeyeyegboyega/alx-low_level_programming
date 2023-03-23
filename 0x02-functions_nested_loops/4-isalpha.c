#include "main.h"

/**
 * _isalpha - alpha check
 *
 * @c: parameter to be checked
 * Return: 1 if either a lower or uppercase
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
