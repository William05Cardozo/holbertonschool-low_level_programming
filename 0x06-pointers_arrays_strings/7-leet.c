#include "main.h"
#include <stdio.h>

/**
 * leet - Entry Point
 * @a: Pointer
 * b: Variable
 * Return: a
 */

char *leet(char *a)
{
	int b;

	for (b = 0; a[b] != '\0'; b++)
	{
		while (a[b] == 'a' || a[b] == 'A')
			a[b] = '4';

		while (a[b] == 'e' || a[b] == 'E')
			a[b] = '3';

		while (a[b] == 'o' || a[b] == 'O')
			a[b] = '0';

		while (a[b] == 't' || a[b] == 'T')
			a[b] = '7';

		while (a[b] == 'l' || a[b] == 'L')
			a[b] = '1';
	}

	return (a);
}
