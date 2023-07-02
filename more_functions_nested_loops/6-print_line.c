#include "main.h"

/**
 * print_line - prints a line of underscores.
 * @n: the number of underscores to print.
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		_putchar('_');
	}
	_putchar ('\n');
}
