#include "main.h"

/**
 * _strlen_recursion - Entry Point
 * @s: Pointer
 * Return: count
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0') /* Base  Case */
		return (0);

	count = 1 + _strlen_recursion(s + 1); /* Recursion Case */

	return (count);
}
