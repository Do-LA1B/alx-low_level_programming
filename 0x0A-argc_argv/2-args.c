#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments of the program
 * @argc: counts arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
