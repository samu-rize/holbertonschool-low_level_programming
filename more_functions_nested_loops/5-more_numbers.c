#include "main.h"
/**
 * more_numbers - check the code
 * Return: always ZERO
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i < 9)
			{
				_putchar ('0' + i / 10);
			}
			_putchar ('0' + i % 10);
		}
		_putchar ('\n');
	}
}
