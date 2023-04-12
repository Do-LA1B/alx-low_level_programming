#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string in which the length to be printed
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a;
	int count = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		count++;
	}
	return (count);
}
