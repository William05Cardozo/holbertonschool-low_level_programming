#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: Pointer
 * @c: Variable
 * a: Variable
 * Return: No line
 */

char *_strchr(char *s, char c)
{
	int a;

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
	return (0);
}
