#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: function parameter
 * @c: function parameter
 * Return: always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
