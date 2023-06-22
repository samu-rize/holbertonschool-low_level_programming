#include "main.h"
/**
 * times_table - check the code
 * Return: always ZERO
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar ('0' + i * j);
			if (j == 9)
			{
				break;
			}
			
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
		}
		_putchar ('\n');
	}

}
