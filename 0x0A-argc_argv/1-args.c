#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of command line arguments
 * @argv: pointer to an array of command line arguments
 * Return: 0-success , non-zero-fail
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
