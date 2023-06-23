#include "main.h"
/**
 * print_diagonal - check the code
 * @n: integer
 * Return: always ZERO
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
