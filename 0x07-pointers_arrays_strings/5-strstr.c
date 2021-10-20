#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry Point
 * @haystack: Pointer
 * @needle: Pointer
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
		if (needle + b)
		return (needle);
		}
	}
	return (NULL);
}
