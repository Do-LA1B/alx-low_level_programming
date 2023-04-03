#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n of an array of integers
 * @a: array
 * @n: numbers of values to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
