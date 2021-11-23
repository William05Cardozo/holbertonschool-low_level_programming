#include "main.h"

/**
 * create_file - Function for create a file
 * @filename: Name for file to create
 * @text_content: Where the text is stored
 * op: open
 * i: Iterator
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int op, i;

	if (filename == NULL)
	{
		return (-1);
	}
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write(op, text_content, i);
		if (op == -1)
		{
			return (-1);
		}
	}
	close(op);
	return (1);
}
