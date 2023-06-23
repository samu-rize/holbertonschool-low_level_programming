#include "main.h"
/**
 * print_diagonal - check the code
 * @n: integer
 * Return: always ZERO
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar (' ');
		}
		_putchar ('\\');
	}
	_putchar ('\n');
}
