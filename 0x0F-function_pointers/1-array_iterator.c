#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - Function
 * @array: int
 * @size: Size of Array
 * @action: Pointer to function
 * a: Variable
 * Raturn: No Line
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
