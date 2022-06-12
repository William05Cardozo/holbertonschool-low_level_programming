#include "search_algos.h"

/**
 * linear_search - funcion
 * @array: is a pointer to the first element
 * @size: is the number the elements in array
 * @value: Value to search
 * Return: -1 in error case
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
