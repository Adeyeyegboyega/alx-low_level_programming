#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - functions
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is grater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6", n, m);
	printf("\n");
	return (0);
}
