#include "main.h"

/**
 * get_bit - Function
 * @n: name variable
 * @index: index starting in 0
 * Return: -1 in case to wrong
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = 64;

	if (index <= bits)
	{
		return ((n >> index) & 1);
	}
	return (-1);
}
