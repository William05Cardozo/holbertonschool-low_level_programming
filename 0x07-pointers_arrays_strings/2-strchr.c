#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: Pointer
 * @c: Variable
 * Return: s + 2
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{

		if (*s == c)
		{
			return (s);
		}
		else
		{
			return (s + 2);
		}
		s++;
	}
	return (s + 2);
}
