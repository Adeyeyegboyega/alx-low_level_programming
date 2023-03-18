#include <stdio.h>

/**
 * main - possible combo
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 0 ; n++)
	{
		putchar(n + '0');
		if (n == '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
