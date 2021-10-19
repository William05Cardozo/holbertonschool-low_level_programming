#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copy memorie
 * @dest: Destiny of copy
 * @src: Pointer
 * @n: Variable
 * a: Varaible
 * Return: Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0 && src[a]; a++, n--)
	{
	src[a] = dest[a];
	}
	return (dest);
}
