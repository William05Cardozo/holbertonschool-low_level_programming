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
		printf("%d es Positivo\n", n);
	else if (n == 0)
		printf("%d es Cero\n", n);
	else 
		printf("%d es Negativo\n", n);
	return (0);
}
