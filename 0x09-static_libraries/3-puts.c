#include "main.h"

/**
 * _puts - function that prints a sting followed by a new line
 * @str: function parameter
 * Return: always 0
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
