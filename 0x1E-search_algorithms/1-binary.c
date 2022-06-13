#include "search_algos.h"

/**
 * binary_search - Function
 * @array: is a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: -1 in error case
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	size_t r = size - 1, m;

		if (array == NULL || size == 0)
			return (-1);
	while (i <= r)
	{
		printf("Searching in array: ");
		for (j = i; j < r; j++)
		{
			printf("%d", array[j]);
		}
		printf("%d", array[j]);
		m = (i + r) / 2;
		if (array[m] < value)
			i = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
