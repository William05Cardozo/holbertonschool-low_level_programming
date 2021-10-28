#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory
 * @b: Variable
 * a: pointer to b
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(sizeof(b));

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
