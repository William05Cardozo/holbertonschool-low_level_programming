#include "main.h"

/**
 * times_table - Entry Point
 * i: Variable
 * a: Variable
 * c: Variable
 * Return: Tabla del 9
 */

void times_table(void)
{
	int i, a, c = 0;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			c = i * a;

			if (c < 10)

			{
				_putchar(' ');
				_putchar(c + '0');
			}

			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar(c % 10 + '0');
			}

			if (a < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
