#include "search_algos.h"

/**
 * linear_search - Function
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value: is the value to search
 * Return: -1 in error case or is NULL
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
