#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: Pointer
 * @c: Variable
 * a: Variable
 * Return: s + 2
 */

char *_strchr(char *s, char c)
{
	unsigned int a;

	a = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s);
		}
		else
		{
			return (s + 2);
		}
	}
	return (s + 2);
}
