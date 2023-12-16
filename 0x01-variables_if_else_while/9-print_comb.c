#include <stdio.h>

/**
 * main - possible combination
 *
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 0 ; n++)
	{
		putchar((n % 10)+ '0');
		if (n == '9')
			continue;
		
			putchar(',');
			putchar(' ');
		
	}
	putchar('\n');
	return (0);
}
