#include "main.h"

/**
 * jack_bauer - Prints every minute of a day
 *
 * Description: This function prints every minute of a day in the format
 * HH:MM, starting from 00:00 and ending at 23:59.
 */

void jack_bauer(void)
{
	int m, m1, h, h1, b;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h = 0; h < 10; h++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar ('0' + h1);
					_putchar ('0' + h);
					_putchar (':');
					_putchar ('0' + m1);
					_putchar ('0' + m);
					_putchar ('\n');
					if (h1 == 2 && h == 3 && m1 == 5 && m == 9)
						b = 1;
					if (b == 1)
						break;
				}
				if (b == 1)
					break;
			if (b == 1)
				break;
			}
			if (b == 1)
				break;
		}
		if (b == 1)
			break;
	}

}
