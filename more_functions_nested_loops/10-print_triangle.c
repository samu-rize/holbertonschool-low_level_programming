#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters
 * @s: The size of the triangle
 *
 * Description: This function prints a triangle made of '#' characters.
 *              The triangle has 's' number of rows, where 's' represents the size.
 *              The first row has 's' number of '#' characters, and each subsequent
 *              row has one less '#' character until the last row.
 *
 * Return: void
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
