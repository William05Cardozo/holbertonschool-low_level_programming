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
	unsigned int a = 0;
	unsigned int b = 0;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
		if (haystack[a] != needle[b])
		return (needle - b);
		
		}
	}
	return (NULL);
}
