#include "main.h"

/**
 * _isupper - Entry Point
 * @c: Variable
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

