#include "main.h"

/**
 * puts2 - prints one character out of two
 * starting with the first one
 * @str: input
 * Return: always 0
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

