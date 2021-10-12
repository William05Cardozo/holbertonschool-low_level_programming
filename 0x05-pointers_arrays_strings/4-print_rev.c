#include "main.h"

/**
 * print_rev - Entry Point
 * @s: Variable
 * a: Variable
 * Return: No line
 */

void print_rev(char *s)
{
	int a;

	for (a = 62; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');

}
