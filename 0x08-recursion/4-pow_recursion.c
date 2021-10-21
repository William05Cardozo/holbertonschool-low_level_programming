#include "main.h"

/**
 * _pow_recursion - Entry Point
 * @x: Entero
 * @y: Potencia elevada
 *
 * return: pot
 */

int _pow_recursion(int x, int y)
{
	int pot;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	pot = x * _pow_recursion(x, (y - 1));
	return (pot);
}
