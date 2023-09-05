#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to a new memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *iii;
	int a, o = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	iii = malloc(sizeof(char) * (a + 1));

	if (iii == NULL)
		return (NULL);

	for (o = 0; str[o]; o++)
		iii[o] = str[o];

	return (iii);
}
