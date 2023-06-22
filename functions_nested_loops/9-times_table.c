#include "main.h"
/**
 * times_table - check the code
 * Return: always ZERO
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			if (r > 9)
				_putchar ('0' + r / 10);
			_putchar ('0' + r % 10);
			if (j == 9)
				break;

			_putchar (',');
			_putchar (' ');
			_putchar (' ');
		}
		_putchar ('\n');
	}

}
