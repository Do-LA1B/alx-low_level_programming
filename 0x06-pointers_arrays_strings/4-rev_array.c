#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: function parameter
 * @n: function parameter
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
