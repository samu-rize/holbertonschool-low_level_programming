#include "main.h"
/**
 * print_triangle - check the code
 * @s: integer
 * Return: always ZERO
 */
void print_triangle(int s)
{
	int i, j;

	for (i = s; i > 0; i--)
	{
		for (j = 0; j < s; j++)
		{
			if (j < i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (s < 1)
	{
		_putchar('\n');
	}
	
}
