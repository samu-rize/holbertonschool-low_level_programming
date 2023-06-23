#include "main.h"
/**
 * print_line - check the code
 * @n: integer
 * Return: always ZERO
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
