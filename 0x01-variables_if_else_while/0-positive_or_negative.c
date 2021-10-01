#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* Numeros positivos o negativos */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Ingrese el numero:");
scanf("%d", &n);
if
(n > 0);
{
printf("Positivo");

}
else
{
printf("Negativo");
}
return (0);
}
