#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments going to program
 * @argc: number of arguments
 * @argv: arrays of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

