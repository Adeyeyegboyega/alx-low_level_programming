#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts strings to integer
 * @s: string to be converted
 *
 * Return: the int converted from strings
 */
int _atoi(char *s)
{
	int a, b, c, len, d, number;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	number = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			number = s[a] - '0';
			if (b % 2)
				number = -number;
			c = c * 10 + number;
			d = 1;
			if (s[d + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (d);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int equates, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	equates = num1 * num2;

	printf("%d\n", equates);

	return (0);
}

