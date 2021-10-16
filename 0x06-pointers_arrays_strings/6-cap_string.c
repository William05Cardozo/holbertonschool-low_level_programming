#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Entry Point
 * @str: Pointer
 * i: Variable
 * j: Variable
 * k: Variable
 * Return: str
 */


char *cap_string(char *str)
{
	int i, j, k;
	char sep[] = " \t\n,;.!?\"(){}";

	j = 0;
	i = 0;

	while (str[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		for (k = 0; k < 13; k++)
		{
			if (str[j] == sep[k] && str[j + 1] != sep[k + 1])
			{
				if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
					str[j + 1] = toupper(str[j + 1]);
			}
		}
	}
	return (str);
}
