#include "main.h"
/**
 * print_to_98 - check the code
 * @n: integer
 * Return: always ZERO
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i > 9)
			{
				_putchar ('0' + i / 10);
				_putchar ('0' + i % 10);
			}
			else
			{
				_putchar ('0' + i);
			}
			if (i != 98)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
	}
	else if (n == 98)
	{
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
	else
	{
		for (i = n; i > 97; i++)
		{
			if (i > 99)
			{
				_putchar ('0' + i / 100);
				_putchar ('0' + (i % 100) / 10);
				_putchar ('0' + i % 10);
			}
			else
			{
				_putchar ('0' + i / 10);
				_putchar ('0' + i % 10);
			}
				if (i != 98)
				{
					_putchar (',');
					_putchar (' ');
				}
		}
	}
}
