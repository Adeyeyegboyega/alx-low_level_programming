#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates the arrays of size and assign char c
 * @size: size of the array
 * @c: char to assign
 * Description: creates the arrays of size and assign char c
 * Return: pointer to array, NULL if unsuccessful
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int o;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (o = 0; o < size; o++)
		str[o] = c;
	return (str);
}

