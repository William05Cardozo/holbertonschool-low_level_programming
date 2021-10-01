#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - main bloc
 *  Descripcion: Imprime un numero random y señala si es mayor a 5 o menor a 6
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (m > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
	return (0);
}
