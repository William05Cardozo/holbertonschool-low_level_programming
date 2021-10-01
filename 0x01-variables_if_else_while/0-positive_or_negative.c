#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - punto de entrada
 * Descripcion: Si el numero es mayor a 0 es Positivo
 * Si es numero es menor a 0 es Negativo
 * Return: siempre 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is Positive\n", n);
	else if (n == 0)
		printf("%d is Zero\n", n);
	else 
		printf("%d is negative\n", n);
	return (0);
}
